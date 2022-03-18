createNode.o : createNode.c
	gcc -g -c createNode.c

printList.o : printList.c
	gcc -g -c printList.c

insertAtBeginning.o : insertAtBeginning.c
	gcc -g -c insertAtBeginning.c

insertAtEnd.o : insertAtEnd.c
	gcc -g -c insertAtEnd.c

insertAtIndex.o : insertAtIndex.c
	gcc -g -c insertAtIndex.c

printInReverse.o : printInReverse.c
	gcc -g -c printInReverse.c

testdriver.o : testdriver.c
	gcc -g -c testdriver.c

deleteFromBeginning.o : deleteFromBeginning.c
	gcc -g -c deleteFromBeginning.c

deleteFromEnd.o : deleteFromEnd.c
	gcc -g -c deleteFromEnd.c

deleteFromIndex.o : deleteFromIndex.c
	gcc -g -c deleteFromIndex.c

getNodeCount.o : getNodeCount.c
	gcc -g -c getNodeCount.c

modifyNode.o : modifyNode.c
	gcc -g -c modifyNode.c

reverseList.o : reverseList.c
	gcc -g -c reverseList.c

FreeMemory.o : FreeMemory.c
	gcc -g -c FreeMemory.c

lib_linkedlist.a : createNode.o printList.o FreeMemory.o printInReverse.o insertAtBeginning.o insertAtEnd.o insertAtIndex.o deleteFromBeginning.o deleteFromEnd.o deleteFromIndex.o getNodeCount.o modifyNode.o reverseList.o
	ar rcs lib_linkedlist.a createNode.o printList.o FreeMemory.o insertAtBeginning.o printInReverse.o insertAtEnd.o insertAtIndex.o deleteFromBeginning.o deleteFromEnd.o deleteFromIndex.o getNodeCount.o modifyNode.o reverseList.o

llib : testdriver.o lib_linkedlist.a
	gcc -o llib testdriver.o -L. lib_linkedlist.a
