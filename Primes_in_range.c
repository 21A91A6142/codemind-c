#include<stdio.h>
#include<math.h>
int isprime(int k)
{
    int i,m=0;
    for(i=2;i<=sqrt(k);i++)
    {
        if(k%i==0)
        {
            m=m+1;
        }
    }
    if(m>0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int a,b,c=0,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(isprime(i) && i>1)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}