#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *pointer_A;
    int *pointer_B;    
	int A[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int B[3][5] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};
	int result[15];
	
    printf("Welcome to the world of C programming\n");

    for(int a = 0; a<15; a++)
    {
        pointer_A = *A;
        pointer_B = *B;

        result[a] = *(pointer_A+a) + *(pointer_B+a);

        printf("No.[%d]: %d\n", a, result[a]);
    }

    return 0;
}