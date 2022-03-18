# LinkedListLibrary
A static linked list library
This library is used to create a linked list of **words only**.

# Brief Description
The following points highlight what each file in this library is responsible for -

1. **createNode.c** - This file creates a new node which should be added in the linked list. This file will take care of the internal contents of the node (data and next pointers).
2. **insertAtBeginning.c** - This file is responsible for inserting a new node at the beginning of the list aka the head node.
3. **insertAtEnd.c** - This file is responsible for inserting a new node at the end of the list.
4. **insertAtIndex.c** - This file is responsible for inserting a new node at a specified index of the list.
5. **modifyNode.c** - This file is used to modify the contents of a node in the list. The old word and the new word can be passed as the arguments along with the headnode.
6. **printList.c** - This file is responsible for printing out the contents of the list.
7. **printInReverse.c**- This file is is responsible for printing the elements of the list in reverse order.
8. **reverseList.c** - This file is responsible for reversing the list. The original list will be reversed.
9. **deleteFromBeginning.c** - This file is responsible for deleting a node from the beginning of the list.
10. **deleteFromEnd.c** - This file is responsible for deleting a node from the end of the list.
11. **deleteFromIndex.c** - This file is responsible for deleting a node from a specified index of the list.
12. **removeNode.c** - This file is responsible for removing all the occurences of a particular word in the linked list.
13. **FreeMemory.c** - This file is responsible for de-allocating all the memory taken up by the file.
14. **makefile** - A makefile used to compile the contents of the program.
15. **listHeader.h** - Header file with all the declarations.
16. **lib_linkedlist.a** - Static linked list library.

The above files have been tested with a test driver and memory allocation and de-allocation has been verified. 

Header file to be included in code - #include"listHeader.h". Sources files have comments which help to understand what each function/segment of code is responsible for.

Compile with the testdriver or main program/test driver in which you want to use the library.
