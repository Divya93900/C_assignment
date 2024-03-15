#include<stdio.h>
void accept_array(int arr[],int length);
void print_array(int arr[],int length);
int main(void)
{
 int arr[4] = {1,5,8,9};
  accept_array(arr,4);
  print_array(arr,4);
}
 void accept_array(int arr[],int length)
 {
 printf("enter array elements:");
 for (int i =0;i<length;i++)
 {
  printf("arr[%d]:",i);
  scanf("%d",arr+i);
  }
}
void print_array(int arr[],int length)
 {
  printf("array:");
  for(int i=0;i<length;i++)
  {
   printf("%-3d",arr[i]);
   printf("\n");
   }
 }  

