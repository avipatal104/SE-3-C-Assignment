#include <stdio.h>
#include <conio.h>

void main()
{
    int i, Num, summation = 0;
    clrscr();
    printf("Enter any number : ");
    scanf("%d", &Num);
    while (Num > 0)
    {
        summation += (Num % 10);
        Num = Num / 10;
    }
    printf("summation of num's digit : %d\n", summation);
    getch();
}