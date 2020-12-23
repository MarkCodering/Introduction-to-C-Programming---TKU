// A simple C program for traversal of a linked list 
#include <stdio.h> 
#include <stdlib.h> 

int num; //number of the container of our linked list data structure
int head[10];

struct Node //Create a container structure
{ 
    int data; //Data's container 
    struct Node* next; //Create a pointer to point to the next container
}; 
  
// This function prints contents of linked list starting from 
// the given node 
void printList(struct Node* n) 
{ 
    while (n != NULL) { 
        printf("%d", n->data); 
        n = n->next; 
    } 
} 
  
int main() 
{
    printf("Welcome to the world of data structure\nTopic: Linked list\n");
    printf("Please input number of container you would like to create:");
    scanf("%d", &num);

    for (int i = 0; i<num; i++)
    {
        struct Node* head[i+1] = NULL;
    }

    /*
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
    */

    // allocate 3 nodes in the heap 
    for(int j = 0; j<num; j++)
    {
        head[j+1] = (struct Node*)malloc(sizeof(struct Node));
    }

    /*
    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node)); 
    */

/* 
    head->data = 1; // assign data in first node 
    head->next = second; // Link first node with second 
  
    second->data = 2; // assign data to second node 
    second->next = third; 
  
    third->data = 3; // assign data to third node 
    third->next = NULL; 

*/ 
    printList(head); 
  
    return 0; 
}