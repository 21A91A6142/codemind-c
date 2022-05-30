#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    scanf("%d",&n);
    //printf("%d
",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<a[i+1];j++)
            {
                printf("%d ",a[i]);
            }
        }
    }
}