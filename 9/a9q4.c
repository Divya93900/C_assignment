#include<stdio.h>
int main()

{
  char ch[5];
  FILE *s_fp=fopen("file1.txt","r");
  FILE *d_fp=fopen("xyz.txt","w");
  while((fgets(ch,5,s_fp))!=0)
  fputs(ch,d_fp);
  fclose(s_fp);
  fclose(d_fp);
  return 0;
 } 
