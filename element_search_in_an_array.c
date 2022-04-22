#include<stdio.h>
int main()
{
    int a[100],n1,n2,i,flag=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    flag=0;
    for(i=0;i<n1;i++)
    {
        if(n2==a[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}