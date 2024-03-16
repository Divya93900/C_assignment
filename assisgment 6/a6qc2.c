#include<stdio.h>
#include<string.h>
char *strcat(char *dest,const char *src);
int main(void)
{
 char str1[10];
 char str2[10];
 printf(" enter the string 1:");
 scanf("%s",str1);
 printf("enter string 2:");
 scanf("%s",str2);
 printf("before strcat : str1 = %s,str2 =%s\n",str1,str2);
 strcat(str1,str2);
 printf("after strcat : str1 =%s,str2 =%s\n",str1,str2);
  return 0;
 }
char *strcat(char *dest,const char *src)
{
int i=0;
while(dest[i]!='\0')
i++;
 for(int j=0;src[j]!='\0';j++,i++)
 dest[i]=src[j];
 dest[i]='\0';
 return dest;
}

