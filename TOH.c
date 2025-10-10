#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void TOH(int n ,char s,char d,char t)
{
    if (n==1)
    {
        printf("\nMove %d disc from %c to %c",n,s,d);
    }
    else
    {
        TOH(n-1,s,t,d);
        printf("\nMove %d disc from %c to %c",n,s,d);
        TOH(n-1,t,d,s);
    }
}
int main()
{
    int n ;
    printf("\nRead the number of disc: ");
    scanf("%d",&n);
    printf("\nSequence of moves :");
    TOH(n,'S','T','D');
    int total=((pow(2,n))-1);
    printf("\nTotal number of moves = %d",total);
}
