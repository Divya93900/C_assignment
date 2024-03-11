#include<stdio.h>
int main()
{
	int n1,n2,ans;
	char op;

	printf("Enter num1 :   ");
	scanf("%d",&n1);
	printf("Enter Operand  : ");
	scanf("%*c%c",&op);
	printf("Enter num2 :  ");
	scanf("%d",&n2);

	switch( op )
	{
		case '+' : ans = n1 + n2 ;
				   printf("ans : %d \n",ans);
				   break;
		case '-' : ans = n1 - n2 ;
				  printf("ans = %d \n",ans);
				  break;
		case '*' : ans = n1 * n2 ;
				   printf("ans : %d \n",ans);
				   break;

		case '/' :if( n2 != 0 )
					{
						ans = n1 /  n2 ;
				  	    printf("ans : %d \n",ans);
					}
				  else
				  	printf("cant Div by 0 \n");
				  break;
		default : printf("Invalid Operand \n");
				  break;
	}
 
  } 
