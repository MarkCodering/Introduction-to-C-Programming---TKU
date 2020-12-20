//Author: Mark Chen
//10th Homework for Introduction to C Programming Language
//Program Strucuture:
//1. Include the library
//2. Examation Function's Prototype
//3. Main Function (If strucuture)
//4. Examation Function

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int No1 = 42024723;
const int No2_1 = 64157858;
const int No3_1 = 84643124;
const int No3_2 = 46665810;
const int No3_3 = 68550826;

const char No4_1[10] = "08550826"; 

int result;
int input_number;
char input_number_array[10];

void exam_function(int, int);

int compare_string(char*, char*);

int main ()
{
    printf("Welcome to the transcipt examation program\nPleasse input your number: ");
    scanf("%d", &input_number);
    itoa(input_number, input_number_array, 10);

    exam_function(input_number_array, input_number);

    return 0;
}

void exam_function(int input_number_array, int input_number)
{
    if (input_number == No1)
    {
        printf("You won the super special prize!!\n");
    } else if (input_number == No2_1)
    {
        printf("You won the special prize!!\n");
    } else if (input_number == No3_1 || input_number == No3_2 || input_number == No3_3)
    {
        printf("You won the first prize!!\n");
    } else if (result == 0)
    {
        printf("You won the second prize\n");
    }
}

int compare_string(char *input_number_array, char *No4_1)
{
    while(*input_number_array==*No4_1)
    {
        if ( *input_number_array == '\0' || *No4_1 == '\0' )
        {
           break;
        }
 
        input_number_array++;
        No4_1++;
    }

    if( *input_number_array == '\0' && *No4_1 == '\0' )
    {
      return 0;
    }else{
      return -1;
    }
}