#include<stdio.h>
float mycube(float x);
int main(){
	float a,b;
	printf("enter any number");
	scanf("%f",&a);
	b=mycube(a);
	printf("cube of %f is %f\n",a,b);
	return 0;
}
float mycube(float x)
{
	float y;
	y= x*x*x;
	return(y);
}