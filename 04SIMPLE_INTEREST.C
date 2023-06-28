#include <stdio.h>
#include <conio.h>

void main()
{
    float Interest, p, r, t;
    clrscr();
    printf("Enter Principal = ");
    scanf("%f", &p);
    printf("Enter Rate of interest = ");
    scanf("%f", &r);
    printf("Enter amount of time = ");
    scanf("%f", &t);

    Interest = (p * r * t) / 100;
    printf("Interest of %f at the rate of interst is %f for %f years = %f", p, r, t, Interest);
    getch();
}