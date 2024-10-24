#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float x,y,z,i,t;
	AA:
	printf("Enter # of hours worked (-1 to end): ");
	scanf("%f",&x);
	if(x==-1)
		return 0;
	printf("Enter hourly rate of the worker ($00.00): ");
	scanf("%f",&y);
	if(x>40)
	{
		i=x-40;
		t=y*40+i*1.5*y;
	}
	else
		t=x*y;
	printf("Salary is : $%.2f\n\n",t);
	goto AA;
	
	
	return 0;
}
