#include<stdio.h>
#include<conio.h>

void main()
{
    int a[20], b[20], c[20], p, q, r, m, n, i;
    p = q = r = 2;
    clrscr();
    printf("Enter the no of factors in 1st polynomial\n");
    scanf("%d", &m);
    printf("Enter the no of factors in the 2nd polynomial\n");
    scanf("%d", &n);
    a[1] = m;
    b[1] = n;
    printf("Enter the exponent and coefficent of 1st polynomial\n");
    for(i = 2; i <= (2 * m) + 1; i++)
    {
	scanf("%d", &a[i]);
    }
    printf("Enter the exponent and coefficent of 2nd polynomial\n");
    for(i = 2; i <= (2 * n) + 1; i++)
    {
	scanf("%d", &b[i]);
    }
    while((p <= 2 * m) && (q <= 2 * n))
    {
	if(a[p] == b[q])
	{
	    c[r + 1] = a[p + 1] + b[q + 1];

	    if(c[r + 1] != 0)
	    {
		c[r] = a[p];
		r = r + 2;
	    }
	    p = p + 2;
	    q = q + 2;
	}
	else if(a[p] < b[q])
	{
	    c[r + 1] = b[q + 1];
	    c[r] = b[q];
	    q = q + 2;
	    r = r + 2;
	}

	else
	{
	    c[r + 1] = a[p + 1];
	    c[r] = a[p];
	    p = p + 2;
	    r = r + 2;
	}
    }

    while(p <= (2 * m))
    {
	c[r] = a[p];
	c[r + 1] = a[p + 1];
	p = p + 2;
	r = r + 2;
    }

    while(q <= (2 * n))
    {
	c[r] = b[q];
	c[r + 1] = b[q + 1];
	q = q + 2;
	r = r + 2;
    }

    c[1] = r / 2 - 1;
    printf("The resultant polynomial is:\n");

    for(i = 1; i < r; i++)
    {
	printf("\t %d", c[i]);
    }

    getch();
}