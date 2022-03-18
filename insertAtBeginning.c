#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

Node* insertAtBeginning(Node* head, char* word)
{
  if(word == NULL)
  {
    printf("Error. Null pointer is passed as word - insertAtBeginning()\n");
    exit(1);
  }

  Node* newNode;
  char* temp_word;

  if((newNode = (Node*)malloc(sizeof(Node))) == NULL)
  {
    printf("Error in creating new node - insertAtBeginning()\n");
    exit(1);
  }
  else{
    newNode->next = NULL;

    if((temp_word = (char*)malloc(MAX_WORD_LENGTH)) == NULL)
    {
      printf("Error in allocating memory for the word - insertAtBeginning()\n");
      exit(1);
    }
    else{
      strcpy(temp_word,word);
      newNode->word = temp_word;
    }
  }

  if(head == NULL)
  {
    printf("Linked list is currently empty. Adding node in the beginning now - insertAtBeginning()\n");
    head = newNode;
  }
  else{
    newNode->next = head;
    head = newNode;
  }

  return head;
}
