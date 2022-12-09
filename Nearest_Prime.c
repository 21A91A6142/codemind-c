#include<stdio.h>
int isprime(int k)
{
    int p=1;
    for(int i=2;i<=k/2;i++)
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
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        int m,k;
        int p=a;
        while(1)
        {
            a=a-1;
            if(isprime(a) && a>1)
            {
                k=a;
                break;
            }
        }
        while(1)
        {
            a=a+1;
            if(isprime(a))
            {
                m=a;
                break;
            }
        }
        if(m-p<p-k)
        {
            printf("%d
",m);
        }
        else
        {
            printf("%d
",k);
        }
    }
}