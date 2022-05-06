#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            c=c+1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}