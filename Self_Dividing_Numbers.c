#include<stdio.h>
int ispretty(int r,int i)
{
    if(i%r==0)
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
    int a,b,i,q,r,c=0,k=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        q=i;
        while(q)
        {
            r=q%10;
            c=c+1;
            if(r!=0)
            {
            	if(ispretty(r,i))
            	{
            		k=k+1;
				}
			}
            q=q/10;
        }
        if(c==k)
        {
            printf("%d ",i);
        }
        c=0;
        k=0;
    }
}