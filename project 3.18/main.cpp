#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float x,y,z,i,t;
	AA:
	printf("Enter sales in dollars (-1 to end): ");
	scanf("%f",&x);
	if(x==-1)
		return 0;
	t=200+x*0.09;
	printf("Salary is : $%.2f\n\n",t);
	goto AA;
	
	
	return 0;
}
