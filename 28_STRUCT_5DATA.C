#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student
{
    int No;
    char Name[30];
    char Add[30];
    int age;
};

void PrintDetail(struct student S, int student)
{
    printf("Detail of %d student\n", student);
    printf("No      : %d\n", S.No);
    printf("Name    : %s\n", S.Name);
    printf("Address : %s\n", S.Add);
    printf("Age     : %d\n", S.age);
}
void GetData(struct student *S, int Student)
{
    printf("Enter Student detail of %d student\n", Student);
    printf("Enter No:");
    scanf("%d", &S->No);
    printf("Enter Name:");
    scanf("%s", &S->Name);
    printf("Enter Add:");
    scanf("%s", &S->Add);
    printf("Enter Age:");
    scanf("%d", &S->age);
}

void main()
{
    int i = 0;
    struct student S1[5];

    for (i = 0; i < 5; i++)
    {
        GetData(&S1[i], i + 1);
    }
    for (i = 0; i < 5; i++)
    {
        PrintDetail(S1[i], i + 1);
    }
}