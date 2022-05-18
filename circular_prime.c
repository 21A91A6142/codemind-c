#include<stdio.h>
int isprime(int k)
{
	int i,c=0;
	for(i=2;i<=k/2;i++)
	{
		if(k%i==0)
		{
			c++;
			break;
		}
	}
	return c;
}
int main()
{
	int n,q,r,sum=0;
	scanf("%d",&n);
	q=n;
	while(q!=0)
	{
		r=q%10;
		sum=sum*10+r;
		q=q/10;
	}
	if(isprime(n)==0 && isprime(sum)!=0)
	{
		printf("prime but not a circular prime");
	}
	else if(isprime(sum)==0 && isprime(n)==0)
	{
		printf("circular prime");
	}
	else
	{
		printf("not prime");
	}
	
}