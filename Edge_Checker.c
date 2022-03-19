#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b-a==1 || b-a==9 ||b-a==-1 || b-a==-9)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}