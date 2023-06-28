#include <stdio.h>
#include <conio.h>

void main()
{
    int i, Num, Rev_Num = 0;
    clrscr();
    printf("Enter any number : ");
    scanf("%d", &Num);
    while (Num > 0)
    {
        Rev_Num = (Rev_Num * 10) + (Num % 10);
        Num = Num / 10;
    }
    printf("Summation of first and last digit of num : %d\n", (Rev_Num%10) + (Num%10));
    getch();
}