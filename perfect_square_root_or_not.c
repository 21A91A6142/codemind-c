#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=1;i<=(int)(n/2);i++)
    {
        if(n%i==0 && i*i==n)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}