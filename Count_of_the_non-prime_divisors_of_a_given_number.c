#include<stdio.h>
int fun(int k)
{
    int j,f=0;
    if(k!=1)
    {
        for(j=2;j<=k/2;j++)
        {
            f=0;
            if(k%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    int n,i,c=1,m=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            if(fun(i))
            {
                m=m+1;
            }
            c=c+1;
        }
    }
    printf("%d",c-m);
}