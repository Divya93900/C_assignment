#include<stdio.h>
void main()
{
 int a,b;
 float z;
 printf("Enter the Value of a :\n");
 scanf("%d",&a);
 printf("Enter the Value of b :\n");
 scanf("%d",&b);
 if (b == 0)
   printf("Division by zero\n");
 else {
   z = a / b;
   printf ("%f", z);
 }
 
}

    

