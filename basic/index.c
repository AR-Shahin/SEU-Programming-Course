// Write a program to print hello world

#include <stdio.h>

// #define PI 3.1416

// Global
// Single line comment

/*
Multiline comment Multiline comment
Multiline comment
*/
int main()
{

    float b, h, area;
    printf("Enter base and height : \n");
    scanf("%f%f", &b, &h);

    area = 0.5 * h * b;

    printf("Area = %.2f ", area);

    return 0;
}
