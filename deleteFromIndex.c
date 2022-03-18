#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern FILE* fpl;

Node* deleteFromIndex(Node* head, int index)
{
  if(head == NULL)
  {
    printf("Error. Cannot delete from an empty list\n");
    exit(1);
  }

  Node* temp = head;
  Node* prevNode;
  int idx = 1;

  while(idx < index)
  {
    prevNode = temp;
    temp = temp->next;
    idx++;
  }

  prevNode->next = temp->next;

  //fprintf(fpl, "freeing node at index %d and address %p\n",index,temp);
  free(temp->word);
  free(temp);

  return head;
}
