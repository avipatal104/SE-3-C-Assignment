#include <stdio.h>
#include <conio.h>
void main()
{
    int r, c;
    char Alpha = 'A';
    clrscr();
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%c ", Alpha);
            Alpha++;
        }
        printf("\n");
    }
    getch();
}