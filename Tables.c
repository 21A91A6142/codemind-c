#include<stdio.h>
int main()
{
    int n,r,i,res;
    scanf("%d",&n);
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        if(i%2!=0)
        {
            res=n*i;
            printf("%d x %d = %d",n,i,res);
            printf("
");
        }
    }
}