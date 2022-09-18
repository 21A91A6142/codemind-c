#include<stdio.h>
#include<math.h>
int isprime(int k1)
{
    int i,c=0;
    for(i=2;i<=(int)k1/2;i++)
    {
        if(k1%i==0)
        {
            c=c+1;
        }
    }
    if(c>0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int ispalan(int k)
{
    int q,r,s=0;
    q=k;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==k)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    while(true)
    {
        a=a+1;
        if(ispalan(a))
        {
            if(isprime(a))
            {
                printf("%d",a);
                break;
            }
        }
    }
}