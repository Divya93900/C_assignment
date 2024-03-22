#include<stdio.h>
//union test
struct test
{
 short num;
 char ch[2];
};

int main(void)
{
 // union test t;
//  char ch;
  //int num;
  struct test t;
  t.num = 25185;

  printf("num=%d\n",t.num);
  printf("ch[0]=%c,ch[i]=%c\n",t.ch[0],t.ch[1]);
  printf("ch[0] =%c,ch[i]=%c\n",t.ch[0],t.ch[1]);
  
  t.ch[0]='a';
  t.ch[1]='b';
  printf("num=%d\n",t.num);
  printf("ch[0]=%c,ch[i]=%c\n",t.ch[0],t.ch[1]);
  printf("ch[0] =%c,ch[i]=%c\n",t.ch[0],t.ch[1]);
  
  printf("offset_of(num)=%d\n",(char* )&t.num-(char* )&t);
  printf("offset_of(char)=%d\n",(char* )t.ch-(char*)&t);
}
