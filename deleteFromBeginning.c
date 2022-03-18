#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern FILE* fpl;

Node* deleteFromBeginning(Node* head)
{
  if(head == NULL)
  {
    printf("Error. Cannot delete from an empty list\n");
    exit(1);
  }
  Node* prevNode = head;
  head = head->next;

  printf("Deleting previous headnode %p\n",prevNode);
  free(prevNode->word);
  free(prevNode);

  return head;
}
