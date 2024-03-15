#include <stdio.h>
void accept_array(short arr[], int length);			
void print_array(short arr[], int length);
void linear_search(short arr[],int lenghth,short key);
int main(void)
{
int key,array[6];
accept_array(arr,6);
print_array(arr,6);
linear search(arr,6)
 shor key;
 printf("enter key to be searched:");
 scanf("%hd",&key);
 void accept_array(short arr[], int length)			
{
	printf("Enter array elements: ");
	for(int i = 0 ; i < length ; i++)
	{
		printf("arr[%hd] : ", i);
		scanf("%hd", arr + i);
	}
}

void print_array(short arr[], int length)			
{
	printf("Array : ");
	for(int  i = 0 ; i < length ; i++)
		printf("%d", arr[i]);
	printf("\n");
}
short search(short arr[], short N, int x)
   {
       for (short i = 0; i < N; i++)
           if (arr[i] == x)
               return i;
       return -1;
   }


