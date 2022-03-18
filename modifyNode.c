#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern FILE* fpl;

void modifyNode(Node* head, char* oldWord, char* newWord)
{
  if(head == NULL)
  {
    printf("List is empty\n");
    exit(1);
  }

  Node* temp = head;

  while(temp->next != NULL)
  {
    if((strcmp(temp->word,oldWord)) == 0)
    {
      break;
    }
    temp=temp->next;
  }
  strcpy(temp->word, newWord);
}
