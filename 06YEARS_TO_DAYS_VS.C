#include <stdio.h>
#include <conio.h>

void main()
{
    int No_Days, No_Years;
    int Year, Day;
    clrscr();
    
    //--------------------- Day to Year convertion -----------------------//
    printf("Enter No of Days = ");
    scanf("%d", &No_Days);
    Year = No_Days / 365;
    Day = No_Days - (Year * 365);
    printf("%d days = %d years and %d Days\n", No_Days, Year, Day);

    //--------------------- Year to day convertion -----------------------//
    printf("Enter No of Years = ");
    scanf("%d", &No_Years);
    Day = No_Years * 365;
    printf("%d years and %d Days\n", No_Years, Day);

    getch();
}