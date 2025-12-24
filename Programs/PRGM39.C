// 39. Program to compare two strings without using string handling function.


#include<stdio.h>
#include<conio.h>
void main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;
    clrscr();

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Compare strings character by character
    while(str1[i] != '\0' && str2[i] != '\0') {
	if(str1[i] != str2[i]) {
	    flag = 1;
	    break;
	}
	i++;
    }

    // Check if lengths are same
    if(str1[i] != str2[i])
	flag = 1;

    if(flag == 0)
	printf("Strings are equal");
    else
	printf("Strings are not equal");

    getch();
}
