#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[n],i,sq;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sq=sqrt(a[i]);
		if(a[i]==sq*sq)
		{
		    printf("True");
		}
		else
		{
		    printf("False");
		}
		printf("
");
	}
}