#include<stdio.h>
int main()
{
	int n,count=0,a,b,max=0,res,i;
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		 count=collatz(i);
		 if(count>max)
		 {
		 	max=count;
		 	res=i;
		 }
	}
	printf("%d",res);
}
    int collatz (long long int n)
    {
    	int c=1;
    	while(n>1)
    	{
    		if(n%2==0)
    		{
    		n=n/2;	
			}
    			
		else
		{
			n=n*3+1;
		}
		c=c+1;
		
	}
	return c;
}
