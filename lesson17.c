#include<stdio.h>
void main()
{
    float number1,number2,answer;
    int option;
    printf("Enter value for number1");
    scanf("%f", &number1);
    printf("Enter value for number2");
    scanf("%f", &number2);
    printf("Select 1 for addition \n for subraction \n 3 for multipication \n division ");
    printf("\n now select one  from above");
    scanf("%d", &option);
    if(option==1)
    {
        answer = number1 + number2;
        printf("\n answer is %f", answer);
    }
    else if (option==2)
    {
        answer = number1 - number2;
        printf("\n answer is %f ", answer);
    } 
    else if (option==3)
    {
        answer = number1 - number2;
        printf("\n answer is %f ", answer);
    } 
    else if (option==4)
    {
        answer = number1 - number2;
        printf("\n answer is %f ", answer);
    }
    else
    {
        printf("invalid number");
    }

    printf("\n goodby...");
}