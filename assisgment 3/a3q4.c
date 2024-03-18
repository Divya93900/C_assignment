#include<stdio.h>
int main()
{
int fact=1,n,i;
printf("enter any value");
scanf("%d",&n);
i=1;
while(i<=n)
{
 fact=fact*i;
 i++;
}
 printf("factorial of %d is %d",fact);

 }

