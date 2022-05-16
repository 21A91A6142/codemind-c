#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,c,total;
    scanf("%lf%lf%lf",&p,&r,&t);
    c=(1+r/100.0);
    total=p*pow(c,t);
    printf("%0.2lf",total);
}