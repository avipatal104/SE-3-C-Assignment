#include <stdio.h>
#include <conio.h>

void main()
{
    float pi = 3.14;
    float Circle_A, Ractangle_A, triangle_A;
    float radius, breadth, height;
    clrscr();
    
    //---------------- Circle Area ----------------//
    printf("Enter radius of Circle = ");
    scanf("%f", &radius);
    Circle_A = pi * radius * radius;
    printf("Area of circle = %f\n", Circle_A);

    //---------------- Rectangle Area ----------------//
    printf("Enter breadth of Rectangle = ");
    scanf("%f", &breadth);
    printf("Enter height of Rectangle = ");
    scanf("%f", &height);
    Ractangle_A = breadth * height;
    printf("Area of Ractangle = %f\n", Ractangle_A);

    //---------------- Triangle Area ----------------//
    printf("Enter base of Triangle = ");
    scanf("%f", &breadth);
    printf("Enter height of Triangle = ");
    scanf("%f", &height);
    triangle_A = (breadth * height) / 2;
    printf("Area of triangle = %f\n", triangle_A);

    getch();
}