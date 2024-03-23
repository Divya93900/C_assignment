#include<stdio.h>
#include<string.h>
typedef enum student_names
{
 divya,navya,bhavya
 }names_s;
typedef struct student
{
   names_s name[20];
   
   int rollnumber;
   float marks;
   int class;
  }std_d;  
names_s *get_names(names_s a)
{
      switch(a)
	  {
	       case divya:return "divya";
		   case navya:return "navya";
		   case bhavya:return "bhavya";
	 }
	 return NULL;
}	
const char *file ="student.txt";
void accept_student(std_d *a);
void print_student(std_d *a);
void add_student(std_d *a);
void display_student();
void search_roll(int a);
void search_name(char a[]);
void edit_marks(char n[] ,float m);
void delete_name(char a[]);

 int main()
 {
 int choice;
  std_d a1;
  char name[20];
  float marks;
  int rollnumber; 
    do
	{
	     printf("0. exit\n");
		 printf("1.add students record\n");
		 printf("2.display records\n");
		 printf("3.search records by roll no\n");
		 printf("4 search records by name\n");
		 printf("5.edit records\n");
		 printf("6.delete records\n");
		 printf("enter choice\n");
		 scanf("%d",&choice);
		  switch(choice)
{
		  case 1:
		  accept_student(&a1);
		 add_student(&a1);
		 print_student(&a1);
		 break;
		  case 2:
		  display_student();
		  break;
		  case 3:
		    printf("enter rollnumber to be searched:");
			scanf("%d",&rollnumber);
			search_roll(rollnumber);
			break;
			case 4:
			printf("enter the name to be searched");
			scanf("%s",name);
			search_name(name);
			case 5:
			printf("enter to be edited");
			scanf("%s",name);
			printf("enter the marks");
			scanf("%f",&marks);
			edit_marks(name,marks);
			break;
            case 6:
            printf("enter name to be deleted");
			scanf("%s",name);
			delete_name(name);
			break;
					




		  }
	}while(choice!=0);
	return 0;
}	
void accept_student(std_d *a)
{
  printf("enter student details:( name,rollnumber,marks,class)\n");
  scanf("%s %d %f %d",(char *)a->name,&a->rollnumber,&a->marks,&a->class);
 }

void print_student(std_d *a)
{
 printf("%-4s%-4d%-4f%-4d\n",a->name,a->rollnumber,a->marks,a->class);
} 
void add_student(std_d *a)
{
    FILE*fp=fopen(file,"ab+");
	fwrite(a,sizeof(std_d),1,fp);
	fclose;
}

void display_student()
{
   FILE*fp=fopen(file,"rb");
   std_d a;
   printf("student list:\n");
   while((fread(&a,sizeof(std_d),1,fp)) !=0)
     print_student(&a);
	 fclose(fp);
}

void search_roll(int r)
{
  FILE*fp=fopen(file,"rb");
  std_d a;
  while((fread(&a,sizeof(std_d),1,fp))!=0)
  if(r==a.rollnumber)
  {
   print_student(&a);
   break;
   }
}   
  
void search_name(char n[]  )
{
 FILE*fp=fopen(file,"rb");
 std_d a;
 while((fread(&a,sizeof(std_d),1,fp))!=0)
 if(!strcmp(n,a.name))
 {
  print_student(&a);
  break;
  }
 } 
  
void edit_marks(char n[] ,float m)
{
FILE*fp=fopen(file,"rb+");	
 std_d a;
 while(fread(&a,sizeof(std_d),1,fp)!=0)
 if(!strcmp(n,a.name))
 {
  a.marks=m;
  fseek(fp,-sizeof(std_d),SEEK_CUR);
  fwrite(&a,sizeof(std_d),1,fp);
  break;
  }
  fclose(fp);
 } 

void delete_name(char n[])
{
 FILE *fp=fopen(file,"rb");
 FILE *tfp=fopen("temp.txt","wb");
 std_d a;
 while(fread(&a,sizeof(std_d),1,fp)!=0)
 {
     if(strcmp(n,a.name))
	 {
	   fwrite(&a,sizeof(std_d),1,tfp);
	   }
}
fclose(tfp);
fclose(fp);
rename("temp.txt",file);
}

