#include<stdio.h>
int main()
{
    int n1,n2,l;
    scanf("%d%d",&n1,&n2);
    for(l=1;l<=(n1*n2);l++)
    {
        if (l%n1==0 && l%n2==0)
        break;
    }
    printf("%d",l);
}