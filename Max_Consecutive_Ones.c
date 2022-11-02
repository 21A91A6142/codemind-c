#include<stdio.h>
int main()
{
    //int n,i,max=-9,c=0;
    int a[10],n,i,max=-9,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c+=1;
        }
        //printf("%d",c);
        else
        {
            c=0;
        }
        if(max<c)
        {
            max=c;
        }
    }
    //printf(" ");
    printf("%d",max);
}