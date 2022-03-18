#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>

void printList(Node* head)
{
  if(head == NULL){
    printf("Cannot print a null pointer\n");
    exit(1);
  }

  Node* temp = head;

  while(temp != NULL)
  {
    printf("%s\n",temp->word);
    temp = temp->next;
  }
}
