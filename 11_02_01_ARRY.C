#include <stdio.h>
#include <conio.h>

void main()
{
    int i, Ary[10], Even = 0, Odd = 0, Sum_Even = 0, Sum_Odd = 0;
    clrscr();
    printf("Enter your 10 user input for fond even numbers\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter Ary[%d] :", i);
        scanf("%d", &Ary[i]);
        if (Ary[i] % 2 == 0)
        {
            Even++;
            Sum_Even += Ary[i];
        }
        else
        {
            Odd++;
            Sum_Odd += Ary[i];
        }
    }
    printf("In this 10 element arry there are %d Even number\n", Even);
    printf("In this 10 element arry there are %d Odd number\n", Odd);
    printf("Sum of arry's even number is %d\n", Sum_Even);
    printf("Sum of arry's odd number is %d\n", Sum_Odd);
    getch();
}
