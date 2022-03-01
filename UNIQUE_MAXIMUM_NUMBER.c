#include<stdio.h>
int main()
{
    int arr[100],n,i,j,max,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=-1;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            flag=1;
        }
        if(flag==0)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
    }
    printf("%d",max);
}