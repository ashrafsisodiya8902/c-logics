#include <stdio.h>

int main()
{
	int side1, side2, side3;
	
	printf("Enter the sides: ");
	scanf("%d %d %d", &side1, &side2, &side3);
	
	if(side1 == side2 == side3)
	{
		printf("This is a equaletral triangle.");
	}
	else if((side1 ==side2 && side1!=side3) || (side1==side2 && side2!=side3))
	{
		printf("this is a squaletral triangle.");
	}
	else{
		printf("this is not equaletral.");
	}
	return 0;
}