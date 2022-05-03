#include<stdio.h>
int fun(int i,int k)
{
    int c=0,j;
    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            c=c+1;
        }
    }
	//printf("%d",k);
    if(c==1)
    {
    	printf("%d
",i);
	}
}
int main()
{
    int a,b,i,c=0,k=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
       c=fun(i,k);
       /*if(c==1)
       {
       	 k=k+1;
	   }*/
    }
    //printf("%d",i);
}