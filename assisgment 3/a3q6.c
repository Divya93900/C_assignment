#include<stdio.h>
int main()
{
int i=1,n;
 printf("enter the value");
 scanf("%d\n",&n);
 printf("factors %d\n",n);
 while(i<=n)
 {
  if(n%i==0)
  {
  printf("%d",i);
  }
  i++;
 }
 }
