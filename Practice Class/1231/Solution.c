/*Tamkang Coding Interview with Linked List
--> Design Objective:
    - Create a Linked List (Data Insertable and Removable)
    - Able to choose the data section to print out all of the data in the container
    - Sorted Linked List
    - For each action (Input), there is a list that show all data

--> Program Architecture
    - Include the library (stdio.h, stdlib.h, string.h)
    - Define the structure (Student)
    - Rename the structure (STD, larger for larger scope)
    - Define the main() function
        - Welcoming message and initial set-up
        - Show all data
        -- Do
            --> Input the data
                --> Select the insert point
                --> Input the value in the new container
            --> Show the data 
            -while (condition is true, then stop the program)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct STUDENT{
    const char *name; 
    float score;
    struct STUDENT *next;
};

typedef struct STUDENT STD;

void List_Init(int*, STD*, STD*);
void Print_List(STD*);
void List_Insertion(int*, int*);
void List_Data_Removal(int*);

int main() //main function
{
    //Local Variables:
    int continue_answer = 0;

    //Local Variable, used globally
    int *amount = 0;
    int *selection; 
    int choice;

    //Linked List Initialisation
    STD *head; //First Container called head
	head = (STD*)malloc(sizeof(STD));
	head->next = NULL;
	
	STD *current;
	current = (STD*)malloc(sizeof(STD));
	current->next = NULL;

    //Welcoming Message
    printf("Welcome to the student score and information management\nHere is the current student data:\n");
    printf("Student's amount:");
	scanf("%d", &amount); 

    List_Init(amount, &current, &head);   

    do{
        printf("\nHere is the current data: \n");
        Print_List(head);

        printf("What action would you like to input?\n(1): Insert Data\n(2): Remove data from the list\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            //Insert Data
            //List_Insertion(&selection, &value);
            //Print_List();
        } else if (choice == 2)
        {
            //Remove the data
            //List_Data_Removal(&selection);
            //Print_List();
        } 
        else 
        {
            //Print_List(current, head);
            //Exit the program
            return 0;
        }

        //Print_List();

        printf("Would you like to continue? (Y:1, N:0)\n");
        scanf("%d", &continue_answer);

    }while(continue_answer == 1);

    return 0;
}

void Print_List(STD *current)
{
    while (current != NULL)
    {
        printf("Student [%s]'s Score: %f\n", current->name, current->score);
        current  = current->next;
    }
}

void List_Init(int *amount, STD *current, STD *head)
{	
	for(int i=0; i<amount ;i++)
    {	
		STD *newP = (STD*)malloc(sizeof(STD));
		
		printf("Enter %d Student Info\n",i+1);
		printf("Name: ");
		newP->name = (char*)malloc(sizeof(char));
		scanf("%s", newP->name);
		
		printf("Score\n=> ");
		scanf("%d", &newP->score);
		newP->next = NULL;
		fflush(stdin);
		
		if(i == 0){
			current = newP;
			head = current;
		}	
		else{
			current->next = newP;
			current = current->next;
		}
			
	}
}

/*
void List_Insertion(int **name, int *value)
{
    struct node * new_node = NULL;
    struct node * last = NULL;
}

void List_Data_Removal(int *selection) 
{}

void insert_end(struct node **head, int value)
{
  
}

*/