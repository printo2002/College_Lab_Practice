// 37. Program to copy one string to another without using
//      string handling function.

#include<stdio.h>
#include<conio.h>

void main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str1);

    // Copy string manually
    while(str1[i] != '\0') {
	str2[i] = str1[i];
	i++;
    }
    str2[i] = '\0';   // End the copied string

    printf("Original string: %s\n", str1);
    printf("Copied string  : %s", str2);

    getch();
}
