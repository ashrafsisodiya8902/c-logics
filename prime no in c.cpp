#include<stdio.h>
int main()
{
	int num,i,check=0;
	printf("enter the number:");
	scanf("%d",&num);
	 
	 for(i=1;i<=num;i++)
	 {
	 	if(num%i==0)
	 	{
	 		check++;
		 }
	 }
	 if(check==2)
	 {
	 	printf("the number is prime");
	 }
	 else
	 {
	 	printf("the number is not prime");
	 }
	 return 0;
}