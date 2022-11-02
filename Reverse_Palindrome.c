#include<stdio.h>
int reverse(int k)
{
    int q,r,s=0;
    q=k;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(true)
    {
        n=n+reverse(n);
        if(reverse(n)==n)
        {
            printf("%d",n);
            break;
        }
        else
        {
            n=reverse(n);
        }
    }
}