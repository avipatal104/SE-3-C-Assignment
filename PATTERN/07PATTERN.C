#include <stdio.h>
#include <conio.h>
void main()
{
    int r, c, Num;
    clrscr();
    printf("Enter Number of Row for pattern : ");
    scanf("%d", &Num);
    for (r = 1; r <= Num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (r = Num - 1; r >= 0; r--)
    {
        for (c = 1; c <= r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}