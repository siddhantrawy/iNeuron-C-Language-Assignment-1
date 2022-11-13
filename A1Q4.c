// Write a program to find the area of the circle.

#include<stdio.h>

int main()
{
    float R, A, PI=3.14;
    printf("Enter radius of a circle: ");
    scanf("%f",&R);
    A = PI*R*R;
    printf("Area of circle is %0.2f having radius %0.2f.", A, R);
    return 0;
}