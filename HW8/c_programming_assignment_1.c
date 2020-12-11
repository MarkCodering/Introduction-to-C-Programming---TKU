#include <stdio.h>
#include <stdlib.h>

int counter_front = 1;
int counter_back = 1;

void layer(int, int);

int main()
{
    for (counter_front = 1; counter_front<10; counter_front++)
    {
    layer(counter_front,1);
    }
    return 0;
}

void layer(int counter_front, int counter_back)
{
    for (counter_back = 1; counter_back<10; counter_back++)
    {
        printf("%d * %d = %d   ", counter_front, counter_back, counter_front*counter_back);
    }
    printf("\n");
}