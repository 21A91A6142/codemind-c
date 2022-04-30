#include<stdio.h>
int add(int sum)
{
	int c=0,r;
	while(c!=1 &&c!=2 &&c!=3 &&c!=4 &&c!=5 &&c!=6 &&c!=7 &&c!=8 &&c!=9)
	{
		c=0;
		while(sum)
		{
			r=sum%10;
			c=c+r;
			sum=sum/10;
		}
		sum=c;
	}
	printf("%d",c);
	return c;
}
int main()
{
	int n,q,r,sum=0;
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum>9)
	{
		add(sum);
	}
	else
	{
		printf("%d",sum);
	}
}