#include<stdio.h>
#include<conio.h>

char st[15];
int top=-1;

int prio(char c);
void push(char st[],char);
char pop(char st[]);
void postfix(char infix[], char posx[]);

char infix[20];
char posx[20];
char temp;

void main()
{
    clrscr();

    printf("Enter the expression\n");
    gets(infix);

    push(st,'#');

    postfix(infix,posx);

    printf("POSTFIX EXPRESSION IS\n");
    printf("%s", posx);

    getch();
}

void postfix(char infix[20], char posx[20])
{
    int i=0,j=0;

    while(infix[i]!='\0')
    {
        if(infix[i]=='(')
        {
            push(st,infix[i]);
        }

        else if(infix[i]==')')
        {
            temp=pop(st);

            while(temp!='(')
            {
                posx[j]=temp;
                j++;

                temp=pop(st);
            }
        }

        else if((infix[i]>='A' && infix[i]<='Z') || (infix[i]>='a' && infix[i]<='z'))
        {
            posx[j]=infix[i];
            j++;
        }

        else
        {
            while((prio(st[top])) >= (prio(infix[i])))
            {
                posx[j]=pop(st);
                j++;
            }

            push(st,infix[i]);
        }

        i++;
    }

    while(top>0)
    {
        posx[j]=pop(st);
        j++;
    }

    posx[j]='\0';
}

int prio(char c)
{
    if(c=='^')
    {
        return 5;
    }

    else if((c=='/') || (c=='*'))
    {
        return 4;
    }

    else if((c=='+') || (c=='-'))
    {
        return 3;
    }

    else
    {
        return 2;
    }
}

void push(char st[], char ch)
{
    if(top==14)
    {
        printf("\nOVERFLOW");
    }

    else
    {
        top=top+1;
        st[top]=ch;
    }
}

char pop(char st[])
{
    char b;

    if(top==-1)
    {
        printf("\nUNDERFLOW");
    }

    else
    {
        b=st[top];
        top--;
    }

    return b;
}