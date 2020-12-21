#include <stdlib.h>
#include <stdio.h>

int main () 
{
    printf("Welcome to C programming language with pointers and array\n");
    int array[5] = {1,2,3,4,5};
    int *pointer = array;  /* Arrays can be used as pointers */
    pointer[0] = 1;        /* Pointers can be indexed with array syntax */

    for (int i = 0; i<5; i++)
    {
        printf("Array Address: %d ", pointer);
        printf("Array Content: %d", array[i]);
        printf("\n");
    }

    printf("Play the array with pointer\n");

    return 0;
}