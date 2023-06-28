#include <stdio.h>
#include <conio.h>

int main()
{
    int i, Num, Rev_Num = 0, Sum = 0;
    printf("Enter any number : ");
    scanf("%d", &Num);
    Sum = Num % 10;
    while (Num > 0)
    {
        Rev_Num = (Rev_Num * 10) + (Num % 10);
        Num = Num / 10;
    }
    Sum += (Rev_Num % 10);
    printf("Summation of first and last digit of num : %d\n", Sum);
}
