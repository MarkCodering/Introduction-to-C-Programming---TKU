#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int result[8];
    int *pointer_A;
    int *pointer_B;
    int A[8] = {0,1,2,2,2,3,3,3};
    int B[8] = {2,3,5,6,4,7,8,9};

    printf("Welcome to the world of C programming!\n\n");

    for(int i = 0; i<8; i++)
    {
        pointer_A = &A[i];
        pointer_B = &B[i];

        result[i] = *pointer_A + *pointer_B;
        printf("The value of [%d] is: %d\n", i, result[i]);
    }

    return 0;
}