#include<stdio.h>
typedef struct student
{
char name[20];
int roll ;
float marks;
}struct_t;

void accept_student(struct_t *s);
void print_student(struct_t *s);

int main(void)

 {
  struct_t arr[5];

   for(int i=0;i<5;i++)
    accept_student(&arr[i]);

 for(int i=0;i<5;i++)
  print_student(&arr[i]);
  }

void accept_student(struct_t *s)
{
 printf("enter details :(name,roll,marks):");
 scanf("%s\n%d\n%f\n",s->name,&s->roll,&s->marks);
 }
void print_student(struct_t *s)
{
 printf("%s\n%d\n%f\n",s->name,s->roll,s->marks);
 }
