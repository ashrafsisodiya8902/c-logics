#include <stdio.h>
 
int main()
{
	char name[60];
	float Basic, HRA, DA, Gross_Salary;
	
	printf("\n Please Enter the Employee Name  :  ");
  	gets(name);
  	
	printf(" Please Enter the Basic Salary of an Employee  :  ");
  	scanf("%f", &Basic);
  
	printf(" Please Enter the HRA Amount of an Employee  :  ");
  	scanf("%f", &HRA);
  	
	printf(" Please Enter the DA Amount of an Employee  :  ");
  	scanf("%f", &DA);
	    	
	Gross_Salary = Basic + HRA + DA;
	
	printf("\n Name = %s \n Basic Salary = %.2f \n HRA Amount   = %.2f \n DA Amount   = %.2f \n Gross Salary = %.2f", name, Basic, HRA, DA, Gross_Salary); 
	
  	return 0;
}