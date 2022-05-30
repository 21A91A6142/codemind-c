#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[100],i=0,j,c=0,q,r,k,m=0;
	scanf("%d",&n);
	c=log10(n)+1;
	q=n;
	while(q)
	{
		r=q%10;
		for(k=i;k<i+1;k++)
		{
			//a[k]==0;
			a[k]=r;
			m=m+1;
		//	printf("%d ",a[k]);
		}
		i++;
		q=q/10;
	}
	for(j=m-1;j>=0;j--)
	{
		if(a[j]==6)
		{
			a[j]=9;
			break;
		}
	}
	for(j=m-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
}