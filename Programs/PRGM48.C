// 48.	Program to count the number of lower case, upper case and special characters in a file

#include <stdio.h>
#include <conio.h>

void main() {
    FILE *fp;
    char ch;
    int lower = 0, upper = 0, special = 0;

    clrscr();

    fp = fopen("prgm48.txt", "r");  // Make sure the file exists in BIN folder
    if(fp == NULL) {
	printf("File cannot be opened");
	getch();
    }

    printf("Contents of the file:\n\n");

    while((ch = fgetc(fp)) != EOF) {
	printf("%c", ch);

	// Count characters
	if(ch >= 'a' && ch <= 'z')
	    lower++;
	else if(ch >= 'A' && ch <= 'Z')
	    upper++;
	else if(ch != '\n' && ch != '\r') // Ignore newline
	    special++;
    }

    fclose(fp);

    printf("\n\nLowercase characters: %d\n", lower);
    printf("Uppercase characters: %d\n", upper);
    printf("Special characters: %d", special);

    getch();
}
