//Include the libraries
#include<stdio.h>
#include<stdlib.h>

//Function prototype
void gcd(int*, int*);

//Main function
//Entry point of the program
int main()
{
    //Declare the varaible as a pointer(vehicle)
    int *num_1, *num_2;
    
    //Introduction
    printf("Welcome to the HW12\nPlease input your first number: ");
    //Input the data
    scanf("%d", &num_1);
    printf("The second number: ");
    scanf("%d", &num_2);
    
    //Call the function
    gcd(&num_1, &num_2);

    return 0;
}

//GCD Computation Function
void gcd(int *num_1, int *num_2) //Recieved the values using pointers
{
    int gcd; //Output result
    //Main loop for finding the GCD
    for(int i=1; i <= *num_1 && i <= *num_2; ++i)
    {
        // Checks if i is factor of both integers
        if(*num_1%i == 0 && *num_2%i == 0)
        {
            //Output the data
            gcd = i;
        }
    }

    //Print the data
    printf("%d", gcd);
}