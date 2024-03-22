#include<stdio.h>
int main(void)
{
 char ch;
 FILE *fp = fopen("file1.txt","w");//create file and open file
 do//  write data into file
 {
 printf("enter the character\n");
  scanf("%c",&ch);
  fputc(ch,fp);
  }
  while(ch!='\n');
  fclose(fp);//close the file
  printf(" data is written\n");
 }


