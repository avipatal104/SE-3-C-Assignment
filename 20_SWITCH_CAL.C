#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, MyCase;
    clrscr();
    printf("Enter i = ");
    scanf("%d", &i);
    printf("Enter j = ");
    scanf("%d", &j);
    printf("1. addition\n2. subtraction\n3. multiplication\n4. division\n5. modulo\n");
    printf("Enter = ");
    scanf("%d", &MyCase);
    switch (MyCase)
    {
    case 1:
        printf("%d + %d = %d\n", i, j, (i + j));
        break;
    case 2:
        printf("%d - %d = %d\n", i, j, (i - j));
        break;
    case 3:
        printf("%d * %d = %d\n", i, j, (i * j));
        break;
    case 4:
        printf("%d / %d = %d\n", i, j, (i / j));
        break;
    case 5:
        printf("%d mod %d = %d\n", i, j, (i % j));
        break;
    default:
        printf("Invalid\n");
    }
    getch();
}