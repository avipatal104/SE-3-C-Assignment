#include <stdio.h>
#include <conio.h>

void main()
{
    int y;
    clrscr();
    printf("Enter Year = ");
    scanf("%d", &y);
    if (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0)      {
        printf("%d is Leap year\n", y);
    }
    else    {
        printf("%d is not Leap year\n", y);
    }
    getch();
}