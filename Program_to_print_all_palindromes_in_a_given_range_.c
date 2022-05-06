#include<stdio.h>
void fun(int i)
{
    int q,r,sum=0;
    q=i;
    while(q!=0)
    {
        r=q%10;
        sum=sum*10+r;
        q=q/10;
    }
    if(sum==i)
    {
        printf("%d ",sum);
    }
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        fun(i);
    }
}