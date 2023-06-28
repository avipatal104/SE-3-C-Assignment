#include <stdio.h>
#include <conio.h>

void main()
{
    int i, Num, a, b, Fib;
    clrscr();
    printf("Enter any number : ");
    scanf("%d", &Num);
    printf("Fibonacci series up to %d is\n", Num);

    a = 0;
    b = 1;
    printf("%d, %d, ", a, b);
    for (i = 2; i < Num; i++)
    {
        Fib = a + b;
        a = b;
        b = Fib;
        printf("%d, ", Fib);
    }
    getch();
}