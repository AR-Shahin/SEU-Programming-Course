// Write a program to print hello world

#include <stdio.h>

#define PI 3.1416
int main()
{

    float r, area;
    printf("Enter radius : \n");
    scanf("%f", &r);

    area = PI * r * r;

    printf("Area = %.2f ", area);

    return 0;
}
