#include<stdio.h>
int main()
{
	int digits, i=0;
	printf("enter the number for which you want to count the digits\n");
	scanf("%d",&digits);
	do{
		digits= digits/10;
		i++;
	}
		while(digits!=0);
		printf("%d",i);
	
}