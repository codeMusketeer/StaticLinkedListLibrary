#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern FILE* fpl;

Node* insertAtEnd(Node* head, char* word)
{
  if(word == NULL)
  {
    printf("Error. Null pointer is passed as word - insertAtEnd()\n");
    exit(1);
  }

  Node* newNode;
  char* temp_word;

  if((newNode = (Node*)malloc(sizeof(Node))) == NULL)
  {
    printf("Error in creating new node - insertAtEnd()\n");
    exit(1);
  }
  else{
    //fprintf(fpl,"Allocated memory to insert a node at the end at %p\n",newNode);
    newNode->next = NULL;

    if((temp_word = (char*)malloc(MAX_WORD_LENGTH)) == NULL)
    {
      printf("Error in allocating memory for the word - insertAtEnd()\n");
      exit(1);
    }
    else{
      //fprintf(fpl,"Allocated memory for new word at the end of the list at %p\n",temp_word);
      strcpy(temp_word,word);
      newNode->word = temp_word;
    }

    Node* temp = head;

    if(head == NULL)
    {
      printf("Currently list is empty. So inserting at the end will create the head node\n");
      head = newNode;
    }
    else{
      while(temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }
  return head;
}
