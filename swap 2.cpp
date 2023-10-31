#include<stdio.h>

main(){
	int a;
	int b;
	int temp;
	printf("enter the integer type value");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	
	printf("swap of a=%d b=%d",a,b);
	return 0;
}