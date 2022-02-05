#include<stdio.h>
int main()
{
    int hf,sf,sef;
    scanf("%d%d%d",&hf,&sf,&sef);
    if(hf>50 && sf>60 && sef>100)
    {
        printf("10");
    }
    else if(hf>50 && sf>60 && sef<100)
    {
        printf("9");
    }
    else if(hf<50 && sf>60 && sef>100)
    {
        printf("8");
    }
    else if(hf>50 && sf<60 && sef>100)
    {
        printf("7");
    }
    else if(hf>50 || sf>60 || sef>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}
