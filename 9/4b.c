#include<stdio.h>
int main(void)
{
  int num;
  char ch;
  double d;
  FILE *fp=fopen("file3.txt","r");
  fscanf(fp,"%d %c %lf",&num,&ch,&d);
  printf("%d%c%lf\n",num,ch,d);
  fclose(fp);
}  
