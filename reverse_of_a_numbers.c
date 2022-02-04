#include<stdio.h>
int main()
{
    int n,r,q,res=0;
    scanf("%d",&n);
    q=n;
    while(q)
    {
        r=q%10;
        res=res*10+r;
        q=q/10;
    }
    printf("%d",res);
    return 0;
}