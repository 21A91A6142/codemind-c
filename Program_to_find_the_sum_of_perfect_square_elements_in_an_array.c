#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],n,i,sq,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sq=sqrt(arr[i]);
        if(arr[i]==sq*sq)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}