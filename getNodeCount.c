#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern FILE* fpl;

int getNodeCount(Node* head)
{
  if(head == NULL){
    return 0;
  }

  Node* temp = head;
  int count = 0;

  while(temp != NULL)
  {
    temp = temp->next;
    count++;
  }
  return count;
}
