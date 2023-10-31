#include<stdio.h>
int main()
{
	int mark;
	printf("enter the marks:");
	scanf("%d",&mark);
	
	if((mark>90)&&(mark<=100))
	{
		printf("grade a");
	}
	else if((mark>80)&&(mark<90))
	{
		printf("grade b");
	}
	else if((mark>70)&&(mark<80))
	{
		printf("grade c");
	}
	else if((mark>60)&&(mark<70))
	{
		printf("grade d");
	}
	else if((mark>50)&&(mark<60))
	{
		printf("grade e");
	}
	else if((mark>40)&&(mark<50))
	{
		printf("grade f");
	}
	else
	{
		printf("fail");
	}
	return 0;
}