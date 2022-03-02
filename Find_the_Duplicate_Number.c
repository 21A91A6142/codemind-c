#include<stdio.h>
int main()
{
    int arr[100],n,i,flag=0,j,c=0;
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
                c=c+1;
                flag=1;
            }
        }
        if(flag==1 && c==2)
        {
            printf("%d",arr[i]);
        }
    }
}