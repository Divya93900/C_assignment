#include<stdio.h>
#include<string.h>
char *strchr(const char *s,int c);
int main(void)
{
  char str[20]="PG -DESD";
  char ch;
  char *ptr;
  printf("enter character :");
  scanf("%c",&ch);
  printf("str=%s[%u]\n",str,str);
  ptr=strchr(str,ch);
  if(ptr==NULL)
  printf("character not found\n");
  else
  printf("character is found\n");

return 0;
}
char *strchr(const char *s,int c)
{
int i=0;
for( ;s[i]!='\0';i++)
{
if (s[i]==c)
return &s[i];
}
if (s[i]==c)
  return &s[i];
  return NULL;
 } 
