#include<stdio.h>
int fun(int a,int b)
{
    int i,c=0;
    for(i=a;i<=b;i++)
    {
        if(i%10==2 || i%10==3 || i%10==9)
        {
            c=c+1;
        }
    }
    printf("%d
",c);
}
int main()
{
    int n,a,b,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%d%d",&a,&b);
        fun(a,b);
    }
}