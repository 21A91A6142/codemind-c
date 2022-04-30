#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,sq,sum,i,r;
    scanf("%d",&n);
    c=log10(n)+1;
    sq=n*n;
    r=pow(10,c);
    sum=sq%r;
    if(sum==n)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}