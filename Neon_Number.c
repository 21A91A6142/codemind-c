#include<stdio.h>
int main()
{
    int n,sq,r,res=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq)
    {
        r=sq%10;
        res=res*1+r;
        sq=sq/10;
    }
    if(res==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}