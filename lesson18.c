#include <stdio.h>
void main()
{
    int height1, width1, height2, width2;
    float area1, area2;
    printf("Enter the value for height1");
    scanf("%d", &height1);
    primtf("Enter the value of width1");
    scanf("%d", &width1);
    area1 = height1 * width1 / 2;
    printf("Area of triangle1 is %f", area1);
    printf("\n Enter value for second triangle");
    printf("Enter the value for height2");
    scanf("%d", &height2);
    primtf("Enter the value of width2");
    scanf("%d", &width2);
    area2 = height2 * width2 / 2;
    printf("Area of triangle1 is %f", area2);
}