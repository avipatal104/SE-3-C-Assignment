#include <stdio.h>
#include <conio.h>

void main()
{
    int i, Num, Max_Num = 0, Small_Num = 9;
    clrscr();
    printf("Enter any number : ");
    scanf("%d", &Num);
    while (Num > 0)
    {
        if ((Num % 10) > Max_Num)
        {
            Max_Num = Num % 10;
        }
        if (Small_Num > (Num % 10))
        {
            Small_Num = (Num % 10);
        }
        Num = Num / 10;
    }
    printf("Max Num : %d\n", Max_Num);
    printf("Small Num : %d\n", Small_Num);
    getch();
}