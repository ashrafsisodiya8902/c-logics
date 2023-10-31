#include<stdio.h>
int main()
{
	int phy,che,bio,com,math;
	float per;
	printf("enter the five subject no");
	scanf("%d %d %d %d %d",&phy,&che,&bio,&com,&math);
	per=(phy+che+bio+com+math)/5;
	printf("per=%f\n",per);
	if(per>=90)
	{
		printf("grade a");
	}
	else if(per>=80)
	{
		printf("grade b");
	}
	else if(per>=70)
	{
		printf("grade c");
	}
	else if(per>=60)
	{
		printf("grade d");
	}
	else if(per>=40)
	{
		printf("grade e");
	}
	else(per<40);
	{
		printf("grade f");
	}
	return 0;
}