#include<stdio.h>
int main(void)
{
      char ch;
//	  create file and open to read
      FILE *fp=fopen("file1.txt","r");
      printf("file contents:\n");
 //read data
      while((ch=fgetc(fp))!=EOF)
      printf("%c",ch);
//close
     fclose(fp);
     return 0;
}
