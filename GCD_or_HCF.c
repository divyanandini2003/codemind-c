#include<stdio.h>
int main()
{
    int n1,n2,gcd,count=1;
    scanf("%d%d",&n1,&n2);
    while(count<=n1 && count<=n2)
    {
        if(n1%count==0 && n2%count==0)
        {
            gcd=count;
        }
        count++;
    }
    printf("%d",gcd);
    return 0;
}