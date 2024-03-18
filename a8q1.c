#include<stdio.h>
struct student
{
  char name[10];
  int rollno;
  float marks;
 };
 int main(void)
 {
   struct student s1;

   printf("enter student name,roll no,marks:");
   scanf("%s%d%f",s1.name,&s1.rollno,&s1.marks);
   printf("name=%s,rollno=%d,marks=%f\n",s1.name,s1.rollno,s1.marks);
  } 


