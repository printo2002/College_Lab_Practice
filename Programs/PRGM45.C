// 45. Program to read and display the contents of a file.

#include <stdio.h>
#include <conio.h>

void main() {
    FILE *fp;
    char ch;

    clrscr();

    fp = fopen("prgm45.txt", "r");  

    if(fp == NULL) {
        printf("File not found or cannot be opened");
        getch();
        return;
    }

    printf("Contents of the file:\n\n");

    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    getch();
}
