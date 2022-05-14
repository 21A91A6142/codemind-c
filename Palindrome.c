#include<stdio.h>
int main()
{
    int x,r,z=0,n;
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
    r=n%10;
    z=z*10+r;
    n=n/10;
    }
    if(x==z)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}