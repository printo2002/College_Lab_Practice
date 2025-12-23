// 29. Program to find the sum of two matrices using function.

#include<stdio.h>
#include<conio.h>
void addition(int r,int c,int a[10][10],int b[10][10]);
void main() {
    int r, c, a[10][10], b[10][10],i, j;
    clrscr();
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) 
            scanf("%d", &a[i][j]);
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) 
            scanf("%d", &b[i][j]);
    addition(r,c,a,b);
    getch();
}

void addition(int r,int c,int a[10][10],int b[10][10])
{
    int add[10][10],i,j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) 
            add[i][j] = a[i][j] + b[i][j];
    
    printf("Addition of two matrices: \n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++)
            printf("%d\t", add[i][j]);
        printf("\n");
        }
}