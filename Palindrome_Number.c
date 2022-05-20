#include<stdio.h>
int main()
{
    int i,n,a,r,temp;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        int s=0;
        scanf("%d",&a);
        temp=a;
        while(a!=0)
        {
            r=a%10;
            s=s*10+r;
            a=a/10;
        }
        if(s==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        s=0;
    }
}