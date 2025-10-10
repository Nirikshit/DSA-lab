#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}

int main()
{
    int a,b;
    printf("\nRead the values for a and b :");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}

