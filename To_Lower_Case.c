#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100],ch;
    int i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        ch=tolower(s[i]);
        printf("%c",ch);
    }
}