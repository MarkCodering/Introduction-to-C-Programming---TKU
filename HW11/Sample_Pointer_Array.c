#include <stdlib.h>
#include <stdio.h>

int main () 
{
    printf("Welcome to C programming language with pointers and array\n\n");
    int array[5] = {1,2,3,4,5};
    int *pointer[5];

    for (int i = 0; i<5; i++)
    {
        pointer[i] = &array[i];
        printf("Array Address: %d ", pointer[i]);
        printf("Array Content: %d", array[i]);
        printf("\n");
    }

    printf("\nPlay the array with pointer\n");

    return 0;
}