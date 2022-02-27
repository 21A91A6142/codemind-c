#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,n3,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        if(n3==n)
        {
            c=c+1;
        }
        n1=n2;
        n2=n3;
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