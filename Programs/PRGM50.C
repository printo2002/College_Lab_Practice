// 50. Program to find the mismatch of opening and closing brackets in a file.

#include <stdio.h>
#include <conio.h>
void main() {
    FILE *fp;
    char ch;
    int round = 0, curly = 0, square = 0;

    clrscr();

    fp = fopen("prgm50.txt", "r");
    if(fp == NULL) {
        printf("Cannot open file");
        getch();
        return;
    }

    printf("Contents of the file:\n\n");

    // Read file and display content
    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);

        // Count brackets
        if(ch == '(') round++;
        else if(ch == ')') round--;
        else if(ch == '{') curly++;
        else if(ch == '}') curly--;
        else if(ch == '[') square++;
        else if(ch == ']') square--;
    }

    fclose(fp);

    printf("\n\nBracket Mismatch Check:\n");

    if(round == 0 && curly == 0 && square == 0)
        printf("All brackets are matched\n");
    else {
        if(round != 0) printf("Round brackets () are mismatched\n");
        if(curly != 0) printf("Curly brackets {} are mismatched\n");
        if(square != 0) printf("Square brackets [] are mismatched\n");
    }

    getch();
}

