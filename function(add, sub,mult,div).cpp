#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return(c);
}
int multi(int a,int b)
{
	int c;
	c=a*b;
	return(c);
}
int div(int a,int b)
{
	int c;
	c=a/b;
	return(c);
}
int main()
{
	int x,y;
	x=50;
	y=10;
	int w= add(x,y);
	int j= sub(x,y);
	int z= multi(x,y);
	int k= div(x,y);
	printf("add is %d\n",w);
	printf("sub is %d\n",j);
	printf("multiply is %d\n",z);
	printf("division is %d",k);
}