#include<stdio.h>

int main(void)
{
 char str[10];
 FILE *fp=fopen("file2.txt","r");
 
 while((fgets(str,sizeof(str),fp))!=NULL)
 {
  printf("%s",str);
  
  }
  
  fclose(fp);
}

