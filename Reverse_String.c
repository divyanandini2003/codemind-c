#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char s1[100],s2[100];
    scanf("%[^
]s",s1);
    for(i=strlen(s1)-1;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }
    s2[j]=NULL;
    printf("%s",s2);
}