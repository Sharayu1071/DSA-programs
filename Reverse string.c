#include<stdio.h>
#include<string.h>
#define MAX 10
char stack[MAX], str[10];
int top=-1;
int i,n;
char item;

void push(item)
{
 top=top+1;
 stack[top]=item;
}

void pop()
{
 item = stack[top];
 top=top-1;
 printf("%c",item);
}

int main()
{

    printf("\nEnter a string you want to reverse-->\n");
    scanf("%s",str);

     n=strlen(str);

        for(i=0;i<n;i++)
       {
        push(str[i]);
       }

        printf("Reverse of string is--> \n");
        for(i=0;i<n;i++)
        {
        pop();
        }

        return 0;
}



