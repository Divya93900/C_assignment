#include<stdio.h>
#include<string.h>
size_t strlen(const char *s);
int main(void)
{
 char str[20];
 size_t len;
  printf("enter string :");
  scanf("%[^\n]s",str);
  printf("str=%s\n",str);
  len =strlen(str);
  printf("length = %d\n",len);

  return 0;

}
