#include<stdio.h>
#define MAX 5
int q[MAX],front=-1, rear=-1;   //Global Data
int item,i;   //variable declaration
void main()   //main function
{
 int ch;
 do   // display menu
 {

 printf("\n________________________________________________________________\n");
 printf("\n@@@@@####... SELECT ...####@@@@@\n");
 printf("\n-->1 INSERT\n-->2 DELETE\n-->3 DISPLAY\n-->4 EXIT");
  printf("\n________________________________________________________________\n");
 printf("\n-->YOUR CHOICE.....? ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:   //case 1 for inserting the element

 if(rear==MAX-1)       // overflow condition check
 printf("\nQUEUE OVERFLOW");
 else
 {
 printf("\nEnter the element to insert in Queue ");
 scanf("%d",&item);
 if(rear==-1)          //initially empty
 front=rear=0;        //initialize front and rear 0
 else
 rear++;        //increase rear
 q[rear]=item;
 printf("\n%d is inserted in Queue ",item);
 }

break;


 case 2:    //case 2 for deleting the element

 if(front==-1)           //underflow condition check
 printf("\n QUEUE UNDERFLOW");
 else
 {
 item = q[front];
 if(front==rear)    // queue contains single element
 front=rear=-1;
 else
 front++;    //increase front
 printf("\n%d is deleted from Queue ",item);
 }

 break;


 case 3:        //case 3 for display the elements


 if(front==-1)   //queue empty condition check
 printf("\nQ is empty");
 else
 {
 printf("\nQueue is ->>\nFRONT-->");
 for(i=front;i<=rear;i++)
 printf("\t%d",q[i]);
 printf("\t<--REAR");
 }

 break;


 case 4: break;    //case 4 for exit

 default:printf("\n...SORRY...\nWrong Choice ");
 }
 }while(ch!=4);
 printf("\nThank You");
} // end of main
//End of program





