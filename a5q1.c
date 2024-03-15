#include<stdio.h>
int main()
{
int a[5],i,s,avg;
printf("enter the marks\n");
for (i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
s=s+a[i];
}
printf("sum is %d",s);
avg=s/5;
printf("average is %f\n",avg);
}




