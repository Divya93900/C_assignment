#include<stdio.h>
int main()
{
int n,i=1;
 printf("enter the number:");
 scanf("%d",&n);
 printf("prime factors %d\n",n);
 while(i<=n)
 {
  if(n%i==0)
   {
   printf("%d",n);
   }
   i++;
  }
}  

