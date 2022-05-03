#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i;
    scanf("%ld",&n);
    i=log10(n)+1;
    if(i==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}