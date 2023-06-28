#include <stdio.h>
#include <conio.h>

void main()
{
    int i,Num;
    // clrscr();
    printf("Enter any number : ");
    scanf("%d",&Num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", Num, i, (i * Num));
    }
    // getch();
}