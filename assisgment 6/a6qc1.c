#include<stdio.h>
#include<string.h>
char *strcat(char *dest,const char *src);
int main(void)
{
       char str1[20];
	   char str2[20];
	   printf("enter string 1 :");
	   scanf("%s",str1);
	   printf("enter string 2 :");
	   scanf("%s",str2);
	   printf("before strcat: str1 = %s,str2 =%s\n",str1,str2);
	   strcat(str1,str2);
	   printf("after strcat : str1 =%s,str2 =%s\n",str1,str2);
	   return 0;
	  } 
