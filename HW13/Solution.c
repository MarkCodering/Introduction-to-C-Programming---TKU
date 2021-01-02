/*
This is assignment for Introducti on to Computer Programming in C (Homework 12)
Problem:
矩陣乘法
Input: 兩個3*3 矩陣, 所有矩陣中的元素
Output: 矩陣乘法結果
Required: 
    1.程式碼請加入註解
    2.設計 Function: 矩陣乘法運算
    3.以 pointers存取矩陣內容並計算(請勿使用陣列存取)
    4.請於main function呈現最後結果
*/

#include <stdio.h>
#include <stdlib.h>

void matrix_input_1(int*);
void matrix_input_2(int*);
void matrix_product(int *, int*);

int main()
{
    int matrix_1[3][3];
    int matrix_2[3][3];

    printf("Welcome the matrix product program\n");

    matrix_input_1((int *)matrix_1);
    matrix_input_2((int *)matrix_2);

    ///////////////////////////////////////////////

    matrix_product((int *)matrix_1, (int *)matrix_2);

    return 0;
}

void matrix_input_1(int *matrix_1)
{
    printf("Please input the first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &*((matrix_1+i*3)+j));
        }
    }
}

void matrix_input_2(int *matrix_2)
{
    printf("Please input the second matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &*((matrix_2+i*3)+j));
        }
        printf("\n");
    }
}

void matrix_product(int *matrix_1, int *matrix_2)
{
    int result;
    printf("The product of two matrix:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("%d\n", *((matrix_1+i*3)+j));
            printf("%d\n", *((matrix_2+i*3)+j));
        }
    }
}