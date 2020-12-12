#include<stdio.h>
#include<stdlib.h>

int len;
int num;
char num_string[10];

void function(int, int, int);

int main()
{
    printf("Please input a series of number:\n");
    scanf("%d", &num);
    len = sizeof(num);
    function(num, len, num_string);

    return 0;
}

void function(int num, int len, int num_string)
{
    for(int j = 0; j<len; j++)
    {
        itoa(len, num_string, 10);
        for (int i = 1; i < len; i++)
        {
            printf("No.(%d) is: %c\n", i, num_string);
        }
    }
}