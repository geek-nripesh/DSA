//FIBBONACI SERIES (sum of first two terms is third term) 0,1,1,2,3,5,8,13,21....
#include<stdio.h>
int main()
{
int n,a=1,i=1,j=0,k=0;
printf("Enter no. of terms in fibbonaci series: ");
scanf("%d",&n);
x:
	if(a<=n)
	{
		printf("%d,",j);
		k=j+i;
		a++;
		i=j;
		j=k;
		goto x;
	}
return 0;
}

