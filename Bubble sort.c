#include<stdio.h>
void main()
{
 int a[5],n=5,temp,k,i;
 printf("\nEnter 5 numbers ");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(k=1; k<=n-1; k++)
 {
 for(i=0; i<n-k; i++)
 {
 if(a[i]<a[i+1])
 {
 temp=a[i];
 a[i]=a[i+1];
 a[i+1]=temp;
 }
 }
 }
 printf("\nAfter Bubble sort ");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
