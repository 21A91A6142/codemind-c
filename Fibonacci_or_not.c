#include<stdio.h>
int main()
{
    int n,a=0,c,b=1,ct=0;
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        if(c>=n)
        {
            if(c==n)
            {
                ct=1;
            }
            break;
        }
        else
        {
            a=b;
            b=c;
        }
    }
    if(ct==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}