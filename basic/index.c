// Write a program to print hello world

#include <stdio.h>

#define MU 3.25
int main()
{

    float foot, meter;
    printf("Enter Foot : \n");
    scanf("%f", &foot);

    meter = foot / MU;

    printf("meter = %.2f ", meter);

    return 0;
}
