#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern FILE* fpl;

Node* deleteFromEnd(Node* head)
{
  if(head == NULL)
  {
    printf("Error. Cannot delete from an empty list\n");
    exit(1);
  }

  Node* temp = head;
  Node* prevNode;

  while(temp->next !=NULL)
  {
    prevNode = temp;
    temp = temp->next;
  }

  prevNode->next = NULL;

  printf("Deleting last node %p\n",temp);
  free(temp->word);
  free(temp);

  return head;
}
