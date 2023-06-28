#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j;
    clrscr();
    printf("Enter i = ");
    scanf("%d", &i);
    printf("Enter j = ");
    scanf("%d", &j);
    printf("%d + %d = %d\n", i, j, (i + j));
    printf("%d - %d = %d\n", i, j, (i - j));
    printf("%d * %d = %d\n", i, j, (i * j));
    printf("%d / %d = %d\n", i, j, (i / j));
    printf("%d mod %d = %d\n", i, j, (i % j));
    getch();
}