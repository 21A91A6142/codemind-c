#include<stdio.h>
int main()
{
    int arr[100],n,i,c=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c=c+1;
        }
        else if(arr[i]%2!=0)
        {
            k=k+1;
        }
    }
    printf("%d %d",c,k);
}