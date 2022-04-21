#include<stdio.h>
int main()
{
    int n,l,q,r;
    scanf("%d",&n);
    q=n;
    l=n%10;
    while(q)
    {
        r=q%10;
        if(l<r)
        {
            l=r;
        }
        q=q/10;
    }
    printf("%d",l);
}