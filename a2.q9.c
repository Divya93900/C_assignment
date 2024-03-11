#include<stdio.h>
int main()
{
 int month,year;
printf("enter month, year");
scanf("%d %d",&month,&year);
{
 if(month==1,month==3,month==5,month==7,month==9,month==11)
   printf(" 31 days");
  else
  printf("30 days");
  }
 {
 if (year%4==0&&year%400==0|| year%100!=0)
  printf(" leap year");

 else
  printf("non leap year");
  }
}

