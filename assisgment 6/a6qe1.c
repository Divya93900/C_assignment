#include<stdio.h>
#include<string.h>
extern int strncmp(const char *__s1,const char *__s2,size_t n);
int main(void)
{
   char str1[20];
   char str2[20];
   int ret;
   printf("enter string 1 :");
   scanf("%s",str1);
   printf("enter string 2 :");
   scanf("%s",str2);
   printf("str1=%s\nstr2=%s\n",str1,str2);
   ret =strcmp(str1,str2);
   printf("ret =%d\n",ret);
   if(ret==0)
       printf("str1 and str2 are equal\n");
	else if(ret<0)
	    printf("str1 is less than str2\n");
	else 
	printf("str1 is greater than str2\n");
	 
	return 0;
}	
