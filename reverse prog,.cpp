#include<stdio.h>
int main()
{
	int n, r=0; rem;
	printf("enter any number");
	scanf("%d",&n);
	while(n!=0)
	{
		printf("reverse the number=%d\n:r",r);
		r= r*10;
		r= r+n%10;
		n= n/10;
	}
}