#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3=0,n,i,flag=0;
    scanf("%d",&n);
   // printf("%d %d",n1,n2);
   flag=0;
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        if(n3==n)
        {
            flag=1;
        }
        n1=n2;
        n2=n3;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}