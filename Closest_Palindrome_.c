#include<stdio.h>
int ispalan(int k)
{
    int q,r,s=0;
    q=k;
    while(q)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,a,b,j;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(ispalan(i))
        {
            a=i;
            break;
        }
    }
    for(j=n-1;;j--)
    {
        if(ispalan(j))
        {
            b=j;
            break;
        }
    }
    if(a-n>n-b)
    {
        printf("%d",b);
    }
    else if(a-n==n-b)
    {
        printf("%d %d",b,a);
    }
    else
    {
        printf("%d",a);
    }
}