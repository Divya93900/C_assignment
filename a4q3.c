#include<stdio.h>
void reverse_array(int arr[],int length);
void print_array(int arr[],int length);
int main(void)
{
int arr[4] = {1,2,4,5};
 print_array(arr,4);
 reverse_array(arr,4);
 print_array(arr,4);
 }
 

  void reverse_array(int arr[],int length)
  {
  int temp,i,j;
   for( i=0,j=length-1;i<j;i++,j--)
   {
       temp = arr[i];
	   arr[i] = arr[j];
	   arr[j]=temp;
	 
	}
  }	
  void print_array(int arr[],int length)
   {
   printf("Array : ");
	for(int  i = 0 ; i < length ; i++)
		printf("%-4d", arr[i]);
	printf("\n");
	}
