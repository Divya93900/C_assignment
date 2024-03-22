#include<stdio.h>
int main(void)
{
  int num = 4;
  char ch='A';
  double d=2.889;
 FILE *fp=fopen("file3.txt","w");
fprintf(fp,"%d%c%lf\n",num,ch,d);
 fclose(fp);
 printf("stored\n");
 return 0;
 }

