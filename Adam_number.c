#include<stdio.h>
int main()
{
	int n,q,k,res=0,x,t,y,z=0,r;
	scanf("%d",&n);
	k=n;
	q=n*n;
	while(k)
	{
		r=k%10;
		res=res*10+r;
		k=k/10;
	}
	x=res*res;
	t=x;
	while(t)
	{
		y=t%10;
		z=z*10+y;
		t=t/10;
	}
	if(z==q)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	
}