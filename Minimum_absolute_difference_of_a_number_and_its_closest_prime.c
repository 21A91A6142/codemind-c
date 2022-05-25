#include<stdio.h>
int isprime(int i)
{
	int j,f=0;
	if(i==1)
	{
		return 0;
	}
	else
	{
		for(j=2;j<=i/2;j++)
		{
			f=0;
			if(i%j==0)
			{
				f=1;
				return 0;
				break;
			}
		}
		if(f==0)
		{
			return 1;
		}
	}
}
int main()
{
	int n,i,g,l,h;
	scanf("%d",&n);
	if(isprime(n))
	{
		printf("0");
	}
	else
	{
		for(i=n+1;;i++)
		{
			if(isprime(i))
			{
				g=i;
				break;
			}
		}
		for(l=n-1;;l--)
		{
			if(isprime(l))
			{
				h=l;
				break;
			}
		}
		if(n-h>g-n)
		{
			printf("%d",g-n);
		}
		else
		{
			printf("%d",n-h);
		}
	}
}