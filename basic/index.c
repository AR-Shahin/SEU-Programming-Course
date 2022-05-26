// Write a program to print hello world

#include <stdio.h>

#define PI 3.1416
int main()
{

    float r, perimeter;
    printf("Enter radius : \n");
    scanf("%f", &r);

    perimeter = PI * 2 * r;

    printf("perimeter = %.2f ", perimeter);

    return 0;
}
