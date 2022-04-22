#include<stdio.h>
int main()
{
    int a[100],sum=0,n,i;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=float(sum)/n;
    printf("%.2f",avg);
}