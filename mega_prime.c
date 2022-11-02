#include<stdio.h>
int isprime(int k)
{
    int i,p=1;
    for(i=2;i<=k/2;i++)
    {
        if(k%i==0)
        {
            p=0;
            break;
        }
    }
    return p;
}
int main()
{
    int n,c=0,s=0,q,r;
    scanf("%d",&n);
    q=n;
    if(isprime(n) && n>1)
    {
        while(q!=0)
        {
            r=q%10;
            s=s+1;
            if(r>1)
            {
                if(isprime(r))
                {
                    c=c+1;
                }
            }
            q=q/10;
        }
        if(s==c)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}