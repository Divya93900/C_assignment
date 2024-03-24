#include<stdio.h>
int main()
{
int arr[4],i;
for(i=0;i<=4;i++)
{
 printf("\nenter the number %d",i+1);
 scanf("%d",&arr[i]);
} 
 
 for(i=4;i>=0;i--)
 {
 printf("%d",arr[i]);
 }
} 
