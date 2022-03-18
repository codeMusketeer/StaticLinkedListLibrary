#include"listHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern FILE* fpl;

Node* createNode(Node* head, char* word)
{
  Node* newNode;
  char* temp_word;
  Node* temp;

  if(word == NULL)
  {
    printf("Cannot insert NULL into the list\n");
    exit(1);
  }

  if((newNode = (Node*)malloc(sizeof(Node))) == NULL)
  {
    printf("Error in allocating memory - createNode\n");
    exit(1);
  }
  else{
    //fprintf(fpl,"New node being added at %p\n",newNode);

    if((temp_word = (char*)malloc(MAX_WORD_LENGTH)) == NULL)
    {
      printf("Error in allocating memory to the word. createNode()\n");
      exit(1);
    }
    else{
      //fprintf(fpl,"Address of the new word is %p\n",temp_word);
      strcpy(temp_word,word);
      newNode->word = temp_word;
    }
    newNode->next = NULL;
  }

  if(head == NULL)
  {
    printf("List is empty. %s is the first word to be added \n",word);
    head = newNode;
    //fprintf(fpl, "Head of the linked list is %p\n",head);
  }
  else
  {
    temp = head;
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  }

  return head;
}
