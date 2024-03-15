#include<stdio.h>
char *strchrnul(const char *s,int c);
int main(void)
{
char str[20] ="pg-desd";
char ch;
char *ptr;
printf("enter character:");
scanf("%c",&ch);
printf("str = %s\n",str);
ptr = strchr(str,ch);
if(ptr==NULL)
printf("charcter not found\n");
else
printf("character is found\n");
return 0;
}
