#include<stdio.h>
#include<string.h>
int main(void)
{
 char str[10];
 FILE *fp=fopen("file2.txt","w");
 printf("enter string:\n");
 do
 {
  scanf("%s",str);
  fputs(str,fp);
  }
  while(strcmp(str,"bye"));
  fclose(fp);
}

