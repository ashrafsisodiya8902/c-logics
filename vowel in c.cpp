#include<stdio.h>
int main()
{
	char ch;
	printf("enter any alphabet:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("alphabet is vowel");
	}
	else
	{
		printf("alphabet is not vowel");
	}
	return 0;
}