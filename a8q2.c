#include<stdio.h>
struct student
{
  char name[20];
  int rollno;
  int marks;
 };

void accept_student(struct student *s);
void print_student(struct student s);

int main(void)
 {
   struct student s1;
   accept_student(&s1);
   print_student(s1);
   return 0;
 }

void accept_student(struct student *s)
{
printf("enter the details:(name, rollno, marks):");
scanf("%s%d%d",s->name,&s->rollno,&s->marks);
}

void print_student(struct student s)
{
printf("name= %s\nrollno= %d\nmarks= %d\n",s.name,s.rollno,s.marks);
}


