## Introduction Array and Pointer
The course today will mainly address the issue of array, pointer, and its relations. 

## Array
An array is set of value with simailar characteristic in a continous memory address. Therefore we can declare the array as the following:

```C
int number [3] = {0,1,2};
char string [] = "hi";
```

## Pointer
However, we need pointer in our C programming language to transform our program or script more dynamic. The approach is to apply the programming technique called pointer. A pointer is a object that store the memory address to gain access to a set of value by connecting their memory address (logical address).

```C
int *pointer;
```

## Array and Pointers Relations


## Example: Create a Linked-List using Array and Pointers
### What is a Linked List
A linked list a abstract data type (ADT) in data structure. Linked List is a dynamic structure that will help us store the value in a dynamic data structure. Therefore, we can create and use the linked list by using array and pointers.

### Example:
First of all, we need to create a node for our linked list.
```C
struct Node
{ 
    int data; //Head
    struct Node* next; //Point to next
};
```
Then we need to create a sample program to introduce the linked list
```C
#include <stdio.h> 
#include <stdlib.h> 
  
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
  
// Program to create a simple linked 
// list with 3 nodes 
int main() 
{ 
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
  
    // allocate 3 nodes in the heap 
    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node)); 
  
    /* Three blocks have been allocated dynamically.  
     We have pointers to these three blocks as head, 
     second and third      
       head           second           third 
        |                |               | 
        |                |               | 
    +---+-----+     +----+----+     +----+----+ 
    | #  | #  |     | #  | #  |     |  # |  # | 
    +---+-----+     +----+----+     +----+----+ 
     
   # represents any random value. 
   Data is random because we haven’t assigned  
   anything yet  */
  
    head->data = 1; // assign data in first node 
    head->next = second; // Link first node with 
    // the second node 
  
    /* data has been assigned to the data part of the first 
     block (block pointed by the head). And next 
     pointer of first block points to second.   
     So they both are linked. 
  
       head          second         third 
        |              |              | 
        |              |              | 
    +---+---+     +----+----+     +-----+----+ 
    | 1  | o----->| #  | #  |     |  #  | #  | 
    +---+---+     +----+----+     +-----+----+     
  */
  
    // assign data to second node 
    second->data = 2; 
  
    // Link second node with the third node 
    second->next = third; 
  
    /* data has been assigned to the data part of the second 
     block (block pointed by second). And next 
     pointer of the second block points to the third  
     block. So all three blocks are linked. 
    
       head         second         third 
        |             |             | 
        |             |             | 
    +---+---+     +---+---+     +----+----+ 
    | 1  | o----->| 2 | o-----> |  # |  # | 
    +---+---+     +---+---+     +----+----+      */
  
    third->data = 3; // assign data to third node 
    third->next = NULL; 
  
    /* data has been assigned to data part of third 
    block (block pointed by third). And next pointer 
    of the third block is made NULL to indicate 
    that the linked list is terminated here. 
  
     We have the linked list ready.   
  
           head     
             | 
             |  
        +---+---+     +---+---+       +----+------+ 
        | 1  | o----->|  2  | o-----> |  3 | NULL | 
        +---+---+     +---+---+       +----+------+        
     
      
    Note that only head is sufficient to represent  
    the whole list.  We can traverse the complete  
    list by following next pointers.    */
  
    return 0; 
}
```