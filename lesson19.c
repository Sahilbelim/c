#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);
    printf("values befor chage a is %d and b is %d \n", a, b);
    c = a;
    a = b;
    b = c;

    printf("values after chage a is %d and b is %d \n", a, b);
}