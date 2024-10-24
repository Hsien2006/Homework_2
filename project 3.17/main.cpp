#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,b,c;
	float x,y,z,i,t;
	AA:
	printf("Enter account number (-1 to end): ");
	scanf("%d",&a);
	if(a==-1)
		return 0;
	printf("Enter beginning balance: ");
	scanf("%f",&x);
	printf("Enter total charges: ");
	scanf("%f",&y);
	printf("Enter total credits: ");
	scanf("%f",&z);
	printf("Enter credit limit: ");
	scanf("%f",&i);
	t=x+y-z;
	if(t>i)
	{
		printf("Account:\t%d\n",a);
		printf("Credit limit:\t%.2f\n",i);
		printf("Balance:\t%.2f\n",t);
		printf("Credit Limit Exceeded\n\n");
	}
	goto AA;
	
	
	return 0;
}
