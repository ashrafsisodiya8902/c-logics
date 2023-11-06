#include<stdio.h>
int main()
{
	float unit;
	float bill;
	float add;
	float total;
	printf("enter the  no. of unit:");
	scanf("%f",&unit);
	if((unit)>0 &&unit<=50)
	{
		bill = unit*0.50;
		printf("the bill is %f(INR)",bill);
		add= bill*20/100;
		total= add+bill;
		printf("\n the additional charge is %f(INR)",add);
		printf("\n the total bill is %f(INR)",total);
	}
	else if((unit)>50 &&unit<=50)
	{
		bill = unit*0.75;
		printf("the bill is %f(INR)",bill);
		add= bill*20/100;
		total= add+bill;
		printf("\n the additional charge is %f(INR)",add);
		printf("\n the total bill is %f(INR)",total);
	}
	else if((unit)>150 &&unit<=250)
	{
		bill = unit*1.20;
		printf("the bill is %f(INR)",bill);
		add= bill*20/100;
		total= add+bill;
		printf("\n the additional charge is %f(INR)",add);
		printf("\n the total bill is %f(INR)",total);
	}
	else
	{
		bill = unit*1.50;
		printf("the bill is %f(INR)",bill);
		add= bill*20/100;
		total= add+bill;
		printf("\n the additional charge is %f(INR)",add);
	}
	return 0;
}