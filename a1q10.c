#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, Perimeter, s, Area;
  
  printf(" Enter three sides of triangle\n");
  scanf("%f%f%f",&a,&b,&c);
   
  Perimeter = a+b+c;
  s = (a+b+c)/2;
  Area = sqrt(s*(s-a)*(s-b)*(s-c));
   
  printf(" Perimeter of Traiangle = %.2f\n", Perimeter);
  printf(" Semi Perimeter of Traiangle = %.2f\n",s);
  printf(" Area of triangle = %.2f\n",Area);

 
}
