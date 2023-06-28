#include <stdio.h>
#include <conio.h>

void main()
{
    int Num;
    clrscr();
    printf("Enter Num = ");
    scanf("%d", &Num);
    (Num % 2) ? (printf("%d is Even number\n", Num)) : printf("%d is Odd number\n", Num);
    getch();
}