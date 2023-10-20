#include<stdio.h>
int main(){
	float m,km;
	printf("enter the distance in kilometer:");
	scanf("%f",&km);
	m= km*1000;
	printf("value in meters is %f",m);
	return 0;
}