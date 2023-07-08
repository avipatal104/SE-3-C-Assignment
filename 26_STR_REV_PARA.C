#include <stdio.h>
#include <conio.h>
#include <string.h>

void main() {
	char Str1[30] = "AVIVA123";
	char Str2[30];
	clrscr();
	strcpy(Str2, Str1);
	printf("%s \n",Str1);
	printf("%s \n",Str2);
	strrev(Str2);
	if(strcmp(Str1,Str2) == 0) {
		printf("Given string is palindromic \n");
	}
	else {
		printf("Given string is not palindronic\n");
	}
	getch();
}