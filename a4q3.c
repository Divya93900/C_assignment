#include<stdio.h>

int cal(int, char, int);

int flag;

int main(void)
{
{
	
	int num1, num2, result,n;
	char opr;

	do
	{
		printf("Enter num1, opr, num2 : ");
		scanf("%d %c %d", &num1, &opr, &num2);
		result = cal(num1, opr, num2);
		
		if(flag == 0)
			printf("%d %c %d = %d\n", num1, opr, num2, result);
		else
			flag = 0;

	

	}
   while(n!=0);
	
}
}
int cal(int num1, char opr, int num2)
{
   int result;

	switch(opr)
	{
		case '+':
			result = num1 + num2;
			break;

		case '-':
			result = num1 - num2;
			break;

		case '*':
			result = num1 * num2;
			break;

		case '/':
			if(num2 != 0)
				result = num1 / num2;
			else
			{
				printf("denominator is zero\n");
				flag = 1;
			}
			break;
	}
	return result;

}


