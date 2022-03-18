#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern FILE* fpl;

Node* insertAtIndex(Node* head, char* word, int index)
{
  if((head == NULL) && (index > 1))
  {
    printf("List is empty. You can only insert at index 0\n");
    exit(1);
  }

  if(word == NULL)
  {
    printf("Error. Null pointer is passed as word - insertAtIndex()\n");
    exit(1);
  }

  Node* newNode;
  char* temp_word;
  int idx = 1;

  if((newNode = (Node*)malloc(sizeof(Node))) == NULL)
  {
    printf("Error in creating new node - insertAtIndex()\n");
    exit(1);
  }
  else{
    //fprintf(fpl,"Allocated memory for new head node at %p\n",newNode);
    newNode->next = NULL;

    if((temp_word = (char*)malloc(MAX_WORD_LENGTH)) == NULL)
    {
      printf("Error in allocating memory for the word - insertAtIndex()\n");
      exit(1);
    }
    else{
      //fprintf(fpl,"Allocated memory for new word at head node at %p\n",temp_word);
      strcpy(temp_word,word);
      newNode->word = temp_word;
    }
  }

  Node* temp = head;
  Node* newPos;

  if((head == NULL) && (index == 1))
  {
    printf("Inserting %s at index 1\n",word);
    head = newNode;
  }
  else{
    while(idx < index - 1)
    {
      temp = temp->next;
      idx++;
    }
  }
  newPos = temp->next;
  temp->next = newNode;
  newNode->next = newPos;

  return head;
}
