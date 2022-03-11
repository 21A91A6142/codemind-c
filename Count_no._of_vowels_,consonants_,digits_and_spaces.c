#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i,v=0,c=0,d=0,w=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U')
        {
            v=v+1;
        }
        else if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
        {
            c=c+1;
        }
        else if(s[i]==' ')
        {
            w=w+1;
        }
    }
    for(i=0;s[i]!=NULL;i++)
    {
        if(isdigit(s[i]))
        {
            d=d+1;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",w);
}