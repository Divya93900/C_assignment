#include<stdio.h>
int main()
{
	int a,b,gcd;
	printf("Enter the numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	int i=1;
	while(i<=a && i<=b)
	{
		if((a%i==0)&&(b%i==0))
		gcd=i;
		i++;
	}
	printf("Gcd=%d\n",gcd);
return 0;
}
