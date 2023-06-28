#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, Ary[10], Val;
    int Asce[10], Desc[10];
    clrscr();
    printf("Enter your 10 user input for fond even numbers\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter Ary[%d] :", i);
        scanf("%d", &Ary[i]);
        Asce[i] = Ary[i];
        Desc[i] = Ary[i];
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (Asce[i] > Asce[j])
            {
                Asce[i] = Asce[i] + Asce[j];
                Asce[j] = Asce[i] - Asce[j];
                Asce[i] = Asce[i] - Asce[j];
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (Desc[i] < Desc[j])
            {
                Desc[i] = Desc[i] + Desc[j];
                Desc[j] = Desc[i] - Desc[j];
                Desc[i] = Desc[i] - Desc[j];
            }
        }
    }

    printf("1. sort arry in ascending order\n2.sort arry in descending order\nEnter Your Responce : ");
    scanf("%d", &Val);
    if (Val == 1)
    {
        printf("ascending order of list is : \n");
        for (i = 0; i < 10; i++)
        {
            printf("%d, ", Asce[i]);
        }
    }
    else if (Val == 2)
    {
        printf("descending order of list is : \n");
        for (i = 0; i < 10; i++)
        {
            printf("%d, ", Desc[i]);
        }
    }
    else
    {
        printf("ascending order of list is : \n");
        for (i = 0; i < 10; i++)
        {
            printf("%d, ", Asce[i]);
        }
        printf("\ndescending order of list is : \n");
        for (i = 0; i < 10; i++)
        {
            printf("%d, ", Desc[i]);
        }
    }
    getch();
}
