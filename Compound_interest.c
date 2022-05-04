#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,a,b;
    scanf("%lf%lf%lf",&p,&r,&t);
    b=pow(1+(r/100),t);
    a=p*b;
    printf("%.2lf",a);
}