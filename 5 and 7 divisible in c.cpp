#include<stdio.h>
int main(){
	int numb;
	printf("enter the value");
	scanf("%d",&numb);
	if(numb%5==0 && numb%7==0)
	{
		printf("the number is divisible by 5 and 7");
	}
	else
	{
		printf("the number is not divisible by 5 and 7");
	}
	return 0;
}