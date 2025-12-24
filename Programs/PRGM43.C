// 43. Program to read a string and calculate the number of vowels in it.

#include<stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int i, count = 0;
    
    printf("----- Vowels -----\n a,e,i,o,u\n A,E,I,O,U\n");
    printf("\n");
    printf("Enter a string: \t");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
	   str[i] == 'o' || str[i] == 'u' ||
	   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
	   str[i] == 'O' || str[i] == 'U') {
	    count++;
	}
    }
    printf("\n");
    printf("Number of vowels = %d", count);

    getch();
}
