#include <stdio.h>
#include <conio.h>
void main()
{
    int i, r, c, Num, space;
    clrscr();
    printf("Enter Number of Row for pattern : ");
    scanf("%d", &Num);
    space = Num;
    for (r = 1; r <= Num; r++)
    {
        for (i = 1; i < space; i++)
        {
            printf("  ");
        }
        space--;
        for (c = 1; c <= r; c++)
        {
            printf("* ");
        }
        for (c = 2; c <= r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}