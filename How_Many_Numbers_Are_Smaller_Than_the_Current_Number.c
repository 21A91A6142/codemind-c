#include<stdio.h>
int main()
{
    int a[100],n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]<a[i])
            {
                c=c+1;
            }
        }
        printf("%d ",c);
        c=0;
    }
}