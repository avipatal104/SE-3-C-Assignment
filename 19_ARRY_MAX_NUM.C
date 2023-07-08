#include <stdio.h>
#include <conio.h>

int Max_Of_Arry(int Ary[], int len)
{
    int i, max = 0;
    for (i = 0; i < len; i++)
    {
        if (max < Ary[i])
            max = Ary[i];
    }
    return max;
}
void main()
{
    int i, ary[5], max;
    clrscr();
    for (i = 0; i < 5; i++)
    {
        printf("Enter Ary[%d] = ", i);
        scanf("%d", &ary[i]);
    }
    max = Max_Of_Arry(ary, 5);
    printf("max number from given array is %d", max);
    getch();
}