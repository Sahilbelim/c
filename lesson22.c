#include<stdio.h>
void main()
{
    int year, answer;
    printf("Enter the year");
    scanf("%d", &year);
    answer = year % 1000;
    if (answer==0)
    {
        /* code */
        printf("it is milliumen year");
    }
    else
    {
        printf("it is not milliumen year");

    }
    printf("\ngoodby,.....");
}