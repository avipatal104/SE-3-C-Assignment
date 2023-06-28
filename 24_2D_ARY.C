#include <stdio.h>
#include <conio.h>

void main()
{
    int i, Ary[3][3], Ary2[3][3], r, c;
    clrscr();
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Enter Ary[%d][%d] : ", r, c);
            scanf("%d", &Ary[r][c]);
        }
    }
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Enter Ary2[%d][%d] : ", r, c);
            scanf("%d ", &Ary2[r][c]);
        }
    }
    printf("addition of 2D arry is : \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d ", (Ary[r][c] + Ary2[r][c]));
        }
        printf("\n");
    }
    printf("Subtraction of 2D arry is : \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d ", (Ary[r][c] - Ary2[r][c]));
        }
        printf("\n");
    }

    printf("multiplication of 2D arry is : \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d ", (Ary[r][c] * Ary2[r][c]));
        }
        printf("\n");
    }
    getch();
}
