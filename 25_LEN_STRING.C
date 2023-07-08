#include <stdio.h>
#include <conio.h>

void main() {
    char i,name[30] = "Hello C language",strLen = 0;
    clrscr();
    for(i = 0; name[i] != '\0';i++) {
        strLen++;
    }
    printf("String Length : %d",strLen);
    getch();

}