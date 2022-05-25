#include<stdio.h>
int main()
{
    int a[100],n,c,s=0,i,f=0,k=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
        	k=0;
		}
		else
		{
			for(j=2;j<=a[i]/2;j++)
			{
				f=0;
				if(a[i]%j==0)
				{
					f=1;
					break;
				}
			}
			if(a[i]>=c && f==0)
			{
				s=s+1;
			}
		}
    }
    printf("%d",s);
}