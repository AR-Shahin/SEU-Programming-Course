// Write a program that convert farenheight to celcious

#include <stdio.h>

#define MU 3.25
int main()
{

    float farenheight, celcious;
    printf("Enter farenheight : \n");
    scanf("%f", &farenheight);

    celcious = (5 * (farenheight - 32)) / 9;

    printf("celcious = %.2f ", celcious);

    return 0;
}
