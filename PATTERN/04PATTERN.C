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
            if((r+c) % 2 == 0)  {
                printf("1");
            }   else    {
                printf("0");
            }
        }
        printf("\n");
    }
    getch();
}