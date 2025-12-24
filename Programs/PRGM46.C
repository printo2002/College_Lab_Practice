// 46. Program to copy one file to another using command line argument.

#include <stdio.h>
#include <conio.h>
void main(int argc, char *argv[]) {
    FILE *fs, *ft;
    char ch;
    if(argc != 3) {
	printf("Usage: copy source_file destination_file");
	return 0;
    }

    fs = fopen(argv[1], "r");   // source file
    if(fs == NULL) {
	printf("Source file cannot be opened");
	return 0;
    }

    ft = fopen(argv[2], "w");   // destination file
    if(ft == NULL) {
	printf("Destination file cannot be created");
	fclose(fs);
	return 0;
    }

    while((ch = fgetc(fs)) != EOF) {
	fputc(ch, ft);
    }

    printf("File copied successfully");

    fclose(fs);
    fclose(ft);

    getch();
}
