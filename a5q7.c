#include<stdio.h>
#include"a5q2.h"
void selection_sort(int arr[],int length);
int main(void)
{
 int arr[4] = { 23,26,28,90};
 int ret,key;
  accept_array(arr,4);
  print_array(arr,4);
  selection_sort(arr,4);
  print_array(arr,4);
  }
  /*
 void accept_array(int arr[],int length)
 {
 printf("enter array elements:");
 for(int i=0;i<length;i++)
 {
    printf("arr[%d]:",i);
	scanf("%d",arr+i);
	}
}
 void print_array(int arr[],int length)
 {
 printf("Array:");
  for(int i=0;i<length;i++)
  {
   printf("%d",arr[i]);
   printf("\n");
   }

  }
  */
  void selection_sort(int  arr[],int length)
  {
  int i,j,temp;
   for(int i=0;i<length-1;i++)
   {
   for(int j=i+1;j<length;j++)
   {
    if (arr[i]>arr[j])
	{
	  temp =arr[i];
	 arr[i]=arr[j];
	 arr[j]=temp;
	}
}	
}
}

