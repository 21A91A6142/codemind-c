#include<stdio.h>
int main()
{
    int n,res=0,r,q;
    scanf("%d",&n);
    q=n;
    while(q)
    {
        r=q%10;
        res=res+r;
        q=q/10;
    }
    if(n%res==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}