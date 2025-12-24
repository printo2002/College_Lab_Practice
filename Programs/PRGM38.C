// 38. Program to concatenate one string to another without using the string handling function.

#include<stdio.h>
#include<conio.h>
void main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);   // For Turbo C++

    printf("Enter second string: ");
    gets(str2);

    // Move to end of first string
    while(str1[i] != '\0') {
        i++;
    }

    // Append second string to first
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated string: %s", str1);

    getch();
}
