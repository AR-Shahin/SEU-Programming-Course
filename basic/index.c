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

    const double PI = 3.1416;
    // PI = 10.6;
    int num1, num3, num4;           // declare
    float num2 = 10.5, num5 = 0.56; // declare and assign
    int _var1;
    double numOne = 10.36; // Camel Case
    double num_one;        // Snake Case

    int z = 10;
    char ch = '#';

    // // bool isMarried = 0;

    // num1 = 10;
    // num1 = 20;

    // printf("Int = %d\n", num1);
    // printf("Float = %f\n", num2);
    // printf("Double = %lf\n", numOne);
    // printf("Char = %c\n", ch);

    // printf("Enter a number : \n");
    // scanf("%d %d %f", &num3, &num4, &num2);
    // printf("Your number is : %d\n", num3);

    // printf("%d\n", &num1);
    // printf("%d",sizeof(ch));

    int a;
    int b;

    // printf("Sum is : %d\n", a + b);
    // printf("Subs is : %d\n", a - b);
    // printf("Multiply is : %d\n", a * b);
    // printf("Div is : %d\n", a / b);
    // printf("Mod is : %d\n", a % b);

    // printf("%d", 10 / 3);

    scanf("%d%d", &a, &b);
    float avg = (a+b)/2.0;
    printf("Avg %f", avg);
    return 0;
}
