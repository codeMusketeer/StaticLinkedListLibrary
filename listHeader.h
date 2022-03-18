#ifndef __LL_HEADER__
#define __LL_HEADER__

#define MAX_BUFFER_SIZE 255
#define MAX_WORD_LENGTH 50

struct node{
  char* word;
  struct node* next;
};

typedef struct node Node;

Node* createNode(Node* head, char* word);
Node* insertAtBeginning(Node* head,char* word);
Node* insertAtEnd(Node* head,char* word);
Node* insertAtIndex(Node* head, char* word, int index);
void printList(Node* head);
void FreeMemory(Node* head);
Node* deleteFromBeginning(Node* head);
Node* deleteFromEnd(Node* head);
Node* deleteFromIndex(Node* head, int index);
int getNodeCount(Node* head);
void modifyNode(Node* head, char* oldWord, char* newWord);
void printInReverse(Node* head);
Node* reverseList(Node* head);

#endif
