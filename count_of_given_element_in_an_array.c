#include<stdio.h>
int main()
{
    int arr[100],n,i,a,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(a==arr[i])
        {
            c=c+1;
        }
    }
    printf("%d",c);
}