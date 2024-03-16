#include<stdio.h>
#include<string.h>
int strcmp(const char *s1,const char *s2);
int main(void)
{
 char str1[9];
 char str2[10];
 int ret;
 printf("enter string 1:");
 scanf("%s",str1);
 printf("enter string 2:");
 scanf("%s",str2);
 printf("str1=%s\n str2=%s\n",str1,str2);
 ret=strcmp(str1,str2);
 printf("ret=%d\n",ret);
 if(ret==0)
     printf("str1 and str2 are equal\n");
 else if(ret<0)
     printf("str1 is less than str2\n");
else
    printf("str1 is greater than str2\n");
return 0;
}
