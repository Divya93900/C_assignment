#include<stdio.h>
int main()
{
int a,b,c;
 printf(" enter the numbers");
 scanf("%d,%d,%d",&a,&b,&c);
 {
 if(a>b&a>c)
  printf(" a is largest");
 else
  printf("smallest");
 }
 {
 if(b>c&b>a)
 printf("b is largest");
 else
 printf(" smallest");
}
{
 if(c>b&c>a)
 printf("c is largerst");
else
 printf(" smallest");
}
}
