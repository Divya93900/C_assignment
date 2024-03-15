#include<stdio.h>
int find_max(int arr[],int length);
int find_min(int arr[],int length);
int search_element(int arr[], int length, short key);
void print_array(int arr[],int length);
int main(void)
{
int arr[4] = {11,22,56,1};
 short ret, key;
 print_array(arr,4);
 printf("maximum element :%d\n",find_max(arr,4));
 printf("minimum element :%d\n",find_min(arr,4));
 printf("enter the key:");
 scanf("%d",&key);
 ret=search_element(arr,4,key);
   {
    if(ret!=-1)
  printf("key is found at index %d\n",ret);
  else
  printf("key is not found\n");
  }
void print_array(int arr[],int length)
{
   printf("array:");
   for(int i=0;i<length;i++)
      printf("%-4hd",arr[i]);
	 printf("\n");
 }
int find_max(int arr[],int length)
{
	int max = 0;
	for(int i = 0 ; i < length ; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}

int find_min(int arr[],int length)
{
	int min = arr[0];
	for(int i = 1 ; i < length ; i++)
	{
		if(arr[i] < min)
			min = arr[i];
	}
	return min;
}
}
