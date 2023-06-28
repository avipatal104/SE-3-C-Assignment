#include <stdio.h>
#include <conio.h>
void main()
{
    int r, c, num=1;
    clrscr();
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    getch();
}