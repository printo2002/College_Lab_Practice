// 30. Program to find the transpose of a matrix using function.

#include<stdio.h>
#include<conio.h>

void transpose(int a[10][10], int r, int c);

void main() {
    int a[10][10], r, c, i, j;

    printf("Enter number of rows: \t");
    scanf("%d", &r);
    printf("Enter number of columns: \t");
    scanf("%d", &c);


    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
	for(j = 0; j < c; j++) {
	    scanf("%d", &a[i][j]);
	}
    }

    transpose(a, r, c);

    getch();
}

// Function to find transpose
void transpose(int a[10][10], int r, int c) {
    int t[10][10], i, j;

    for(i = 0; i < r; i++) {
	for(j = 0; j < c; j++) {
	    t[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

