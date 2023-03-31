#include <stdio.h>
void main()
{
    float number1, number2, answer;
    int option;
    printf("Enter value for number1 ");
    scanf("%f", &number1);
    printf("Enter value for number2 ");
    scanf("%f", &number2);
    printf("select 1 for addition \n 2 for subtraction \n 3 for multipication \n 4 for divition");
    printf("\n now selectone from above ");
    scanf("%d", &option);
    if (option == 1)
    {
        /* code */
        answer = number1 + number2;
        printf("\n answer is %f", answer);
    }
    else if (option == 2)
    {
        /* code */
        answer = number1 - number2;
        printf("\n answer is %f", answer);
    }
    else if (option == 3)
    {
        /* code */
        answer = number1 * number2;
        printf("\n answer is %f", answer);
    }
    else if (option == 4)
    {
        /* code */
        answer = number1 / number2;
        printf("\n answer is %f", answer);
    }
    else
    {
        printf("invalid number");
    }
    printf("\n good by,...........");
}