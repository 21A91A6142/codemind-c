#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int e=0,o=0,mix=0,r,c=0;
    while(N)
    {
        r=N%10;
        N=N/10;
        c=c+1;
        if(r%2==0)
          e++;
          else if(r%2!=0)
           mix++;
    }
    if(c==e)
    printf("Even");
    else if(c==mix)
    printf("Odd");
    else
    printf("Mixed");
}