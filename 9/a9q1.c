#include<stdio.h>
int main()
{
char ch;
FILE *fp=fopen("file1.txt","r");
printf("all contents in file1:\n");
while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
fclose(fp);
return 0;
}
