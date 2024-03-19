#include <stdio.h>

int main()
{
    int a,i=1;
    printf("Enter a NO:");
    scanf("%d", &a);

    while (i<=a/i)
    {
        if(a%i==0)
        {
            printf("%d*%d=%d\n",i,a/i,a);
        }

        
        i++;
    }
}
