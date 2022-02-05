#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,p,res;
    scanf("%d%d%d",&x,&y,&z);
    p=pow(x,y);
    res=p%z;
    printf("%d",res);
}