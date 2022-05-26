// Write a program that convert farenheight to celcious

#include <stdio.h>

#define MU 3.25
int main()
{

    int a = 10, b = 5, temp;
    printf("before swapping %d -> %d\n", a, b);
    temp = a; // a is empty now
    a = b;    // b is empty now and a has b
    b = temp; // temp is empty now

    printf("%d -> %d", a, b);
    return 0;
}
