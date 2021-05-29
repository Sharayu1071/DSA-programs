#include<stdio.h>
void main()
{

 float a[5]={0};
 float item;
 int n=5,pos,i;

 printf("\n enter array elements");
 for(i=0;i<n;i++){
 scanf("%f",&a[i]);
 }

 printf("\nArray elements are..\n");
 for(i=0;i<n;i++)
 printf("%.2f\t",a[i]);

 printf("\nEnter the number to search in the array ");
 scanf("%f",&item);
 i=0;
 while(i<n)
 {
 if(a[i]==item)
 {
 printf("\n %.2f is found at %d position",item,i);
break;
 }
 i++;
 }
if(i==n)
printf("\n%.2f is not found in the array",item);
 return;

}
