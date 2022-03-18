#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>

extern FILE* fpl;

void FreeMemory(Node* head)
{
  if(head == NULL)
  {
    printf("Error! Cannot free a null pointer \n");
    exit(1);
  }

  Node* temp = head;
  Node* prevNode;

  while(temp != NULL)
  {
    prevNode = temp;
    temp = temp->next;
    //fprintf(fpl,"Freeing word memory %p\n",prevNode->word);
    free(prevNode->word);
    //fprintf(fpl,"Freeing memory %p\n",prevNode);
    free(prevNode);
  }

  printf("All memories freed successfully \n");
}
