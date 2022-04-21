#include<stdio.h>
#include<math.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    l=sqrt(n);
    if(n==l*l)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}