#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    printf("Valuesm befor change a is %d and b is %d\n", a, b);
    c = a;
    a = b;
    b = c;

    printf("Valuesm befor change a is %d and b is %d\n", a, b);
}    