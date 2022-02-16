#include<stdio.h>
int main()
{
    int n,lar,q,r;
    scanf("%d",&n);
    q=n;
    lar=n%10;
    while(q!=0)
    {
        r=q%10;
        if(r>lar)
        {
            lar=r;
        }
        q=q/10;
    }
    printf("%d",lar);
}