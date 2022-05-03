#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,r,sum=0,c;
    scanf("%d",&n);
    q=n;
    c=log10(n)+1;
    while(q)
    {
        r=q%10;
        sum=sum+pow(r,c);
        q=q/10;
        c--;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}