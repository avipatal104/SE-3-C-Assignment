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

void PrintDetail(struct student S)
{
    printf("No      : %d\n", S.No);
    printf("Name    : %s\n", S.Name);
    printf("Address : %s\n", S.Add);
    printf("Age     : %d\n", S.age);
}
void GetData(struct student *S)
{
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
    struct student S1;
    printf("Enter Student detail\n");
    GetData(&S1);
    PrintDetail(S1);
}