#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%[^
]s",s);
    while(s[i]!=NULL)
    {
        if(isdigit(s[i]))
        c=c+1;
        i++;
    }
    if(c>0)
    {
        printf("Contains %d digit",c);
    }
    else
    {
        printf("Doesn't contain digit");
    }
}