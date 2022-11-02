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
    int n,m,k;
    scanf("%d %d",&n,&m);
    k=n+m;
    while(true)
    {
        k=k+1;
        if(isprime(k))
        {
            printf("%d",k-(m+n));
            break;
        }
    }
}