#include<stdio.h>
int main()
{
	int a,d,s=0;
	printf("Enter number: ");
	scanf("%d",&a);
	int b=a;
	x:
		if (a!=0)
			{
			d=a%10;
			a=a/10;
			s=s+d*d*d;
			goto x;
			}
		printf("Sum of cube of digits is : %d",s);
	if (b==s)
	printf("\nArmstrong");
	else
	printf("\nNot Armstrong");


return 0;
}
