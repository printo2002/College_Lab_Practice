// 47. Program to count the number of words and
//     number of lines in a file using command line argument.

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    int words = 0, lines = 0;
    int inWord = 0;

    if (argc != 2) {
        printf("Invalid arguments");
        return 0;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Number of lines = %d\n", lines);
    printf("Number of words = %d", words);

    getch();
}
