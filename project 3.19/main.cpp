#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float x,y,z,i,t;
	AA:
	printf("Enter loan principal (-1 to end): ");
	scanf("%f",&x);
	if(x==-1)
		return 0;
	printf("Enter interest rate: ");
	scanf("%f",&y);
	printf("Enter term of the loan in days: ");
	scanf("%f",&z);
	i=z/365;
	t=x*y*i;
	printf("The interest charge is : $%.2f\n\n",t);
	goto AA;
	
	
	return 0;
}
