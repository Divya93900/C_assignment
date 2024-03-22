#include<stdio.h>
int main(int argc,char *argv[])

{
  char ch[5];
  FILE *s_fp=fopen(argv[1],"r");
  FILE *d_fp=fopen(argv[2],"w");
  while((fgets(ch,5,s_fp))!=0)
  fputs(ch,d_fp);
  fclose(s_fp);
  fclose(d_fp);
  return 0;
 } 
