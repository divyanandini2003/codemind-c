#include<stdio.h>
#include<math.h>
int square(int n)
{
    int a,c;
    a=sqrt(n);
    c=a*a;
    if(n==c)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(square(a[i])==true)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        
    }
}