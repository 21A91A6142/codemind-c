#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=1;i<sqrt(n);i++)
    {
        flag=0;
        if(n%i==0)
        {
            (i)*(i+1)==n;
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}