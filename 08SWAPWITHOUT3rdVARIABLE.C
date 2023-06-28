#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;
    clrscr();
    printf("Value before Swap\n");
    printf("Enter i = ");
    scanf("%d", &i);
    printf("Enter j = ");
    scanf("%d", &j);

    i = i ^ j;
    j = i ^ j;
    i = i ^ j;

    printf("Value after Swap\n");
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    getch();
}