#include<stdio.h>
void main()
{
    int num1;
    printf("Enter your number");
    scanf("%d", &num1);
    if (num1%2==0)
    {
        /* code */
        printf("it is even number");
    }
    else
    {
        printf("it is odd number");

    }
    printf("\nGoodbye,....");
}