#include <stdio.h>
#include <conio.h>

void main()
{
    int i, Num,Factorial = 1;
    // clrscr();
    printf("Enter any number : ");
    scanf("%d", &Num);
    for (i = Num; i > 0; i--)
    {
        Factorial *= i;
    }
    printf("Factorial of %d is %d",Num, Factorial);
    // getch();
}