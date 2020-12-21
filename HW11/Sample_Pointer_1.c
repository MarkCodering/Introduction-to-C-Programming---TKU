#include<stdio.h>
#include<stdlib.h>

int main ()
{
    printf("Welcome to the introduction to C programming with pointer\n");
    int *pointer;
    int content = 5;
    pointer = &content;
    printf("Address: %d\nContent: %d\n", pointer, content);

    printf("------------------------------------\n");
    *pointer = 10;
    printf("Address: %d\nContent: %d\n", pointer, content);

    return 0;
}