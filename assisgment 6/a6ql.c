#include<stdio.h>
#include<string.h>
int main(void)
{
char str[65]="i am divya";
char *ptr;
ptr=strtok(str,"");
printf("token=%s\n",ptr);
ptr=strtok(NULL," ");
printf("token=%s\n",ptr);

ptr=strtok(str," ");
printf("ptr =%s\n",ptr);
while(ptr!=NULL)
{
ptr=strtok(NULL," ");
printf("ptr=%s\n",ptr);
}
return 0;
}
