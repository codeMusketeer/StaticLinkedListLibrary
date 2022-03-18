#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>

void printInReverse(Node* head)
{
  if(head == NULL)
  {
    return;
  }

  printInReverse(head->next);
  printf("%s\n",head->word);
}
