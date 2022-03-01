#include<stdio.h>
int main()
{
    int arr[100],n,i,j,flag=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%d ",arr[i]);
        }
        else if(flag==1)
        {
            c=c+1;
        }
    }
    if(c==n)
    printf("-1");
}