#include<stdio.h>
#include<string.h>
char *strcpy(char *dest,const char *src);
int main(void)
{
   char str1[20];
   char str2[20];
   printf("enter string:");
   scanf("%[^\n]s",str1);
   printf("str1=%s\n",str1);
   strcpy(str2,str1);
   printf("str2 =%s\n",str2);
   return 0;
}

