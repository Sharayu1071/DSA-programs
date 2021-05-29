//doubly linked list program

#include<stdio.h>
#include<conio.h>

struct node {
int data;
struct node *next,*prev;
};
struct node *first=NULL,*last=NULL;

void Insert();
void Delete();
void Display();
void Search();
int length();

void main()
{
int ch;
do
{
printf("\n\nMENU");
printf("\n1 Insert\n2 Delete \n3 Search\n4 Display\n5 Exit");
printf("\nChoice ? ");
scanf("%d",&ch);


switch(ch)
{
case 1: Insert(); break;
case 2: Delete(); break;
case 3: Search(); break;
case 4: Display(); break;
case 5: break;
default : printf("\nWrong Choice ");
}
}while(ch!=5);
printf("\nThank You ");
} // end of main

int length()
{
 int c=0;
 struct node *p=first;
 if(first==NULL)
 return 0;
 else
 {
 do
 {
 c++;
 p=p->next;
 }while(p!=NULL);
 return c;
 }
}

// end of length

void Search()
{
 int item;
 struct node *p;
 if(first==NULL)
 printf("\nEmpty");
 else
 {
 printf("\nEnter the number ");
 scanf("%d",&item);
 p=first;
 while(p!=NULL && p->data!=item)
 p=p->next;
 if(p==NULL)
 printf("\n%d is not found ", item);
 else
 printf("\n%d is found ", item);
 }
}
//end of search

void Display()
{
 struct node *p;
 if(first==NULL)
 printf("\nEmpty");
 else
 {
 printf("\nList is \n");
 p=first;
 do
 {
 printf("\t%d",p->data);
 p=p->next;
 }while(p!=NULL);
 }
}
//end of display

void Insert()
{
struct node *p,*n;
int i,pos;
printf("\nEnter position ");
scanf("%d",&pos);
if(pos<=length()+1)
{
n=(struct node *)malloc(sizeof(struct node));
printf("\nEnter number ");
scanf("%d",&n->data);
if(pos==1)
{
n->next=first;
n->prev=NULL;
first=n;
}
else
{
p=first;
for(i=1;i<pos-1;i++)
p=p->next;

n->next=p->next;
p->next=n;

n->prev=p;
}
printf("\n%d is inserted at %d position ",n->data,pos);
}

else
printf("\nInvalid position");
}
//end of insert

void Delete()
{
struct node *p,*n;
int pos,i;
if(first==NULL)
printf("\nUNDERFLOW");
else
{
printf("\nEnter the position ");
scanf("%d",&pos);
if(pos<=length())
{
if(pos==1)
{
n=first;
first=first->next;
first->prev=NULL;
printf("\n%d is deleted from %d position", n->data,pos);
free(n);
}
else
{
p=first;
for(i=1;i<pos-1;i++)
p=p->next;

n= p->next;


p->next = n->next;
n->prev=p;
printf("\n%d is deleted from %d position", n->data,pos);
free(n);
}
}
else
printf("\nInvalid position");
}
} //end of Delete

