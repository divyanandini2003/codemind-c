#include<stdio.h>
int main()
{
    int i=1,num,sum=0;
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        sum=sum+i;
        i++;
    }
    if(sum==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
   