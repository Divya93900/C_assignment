#include<stdio.h>
#include<string.h>
char*strstr(const char *haystack,const char *needle);
int main(void)
{
 char str[64]="i am student of DESD couse";
 char substr[4]="of";
 char *ptr =strstr(str,substr);
 printf("str =%u\n",str);
 printf("ptr=%u\n",ptr);
 printf("ptr=%s\n",ptr);
 return 0;
 }

