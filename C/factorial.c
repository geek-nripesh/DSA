#include"stdio.h"
int main()
{
	int n,i=0,f=1;
	printf("Enter n : ");
	scanf("%d",&n);
	x:
	i=i+1;
	if(i<=n)
	{f=i*f;
	 goto x;}
	 else if(n==0)
	 f=1;
	 printf("Factorial is : %d",f);
	
return 0;
}
