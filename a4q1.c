#include<stdio.h>
int fact(int);
int main()
{
 int a, result;
 printf(" enter the number");
  
  scanf("%d",&a);
  result =fact(a);
  printf(" fact %d,%d \n",a,fact(a));
  }
int fact(int a)
{
int res;
if(a==0||a==1)
return 1;
else
 res=a*fact(a-1);
 return res;
 }


