#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>

Node* reverseList(Node* head){
  if(head == NULL){
    printf("Error. NULL pointer passed to reverseList(). \n");
    exit(1);
  }

  Node* prevNode = head;
  Node* nextNode = head;
  Node* temp = head;

  while(temp->next != NULL){
    nextNode = temp->next;
    if(temp == head){
      temp->next = NULL;
    }
    else{
      temp->next = prevNode;
    }
    prevNode = temp;
    temp = nextNode;
  }
  temp->next = prevNode;
  head = temp;

  return head;
}
