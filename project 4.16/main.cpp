#include <iostream>
#include <string>
using std::string;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int x,y,z,i,j,t;
	printf("(A)\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	
	printf("(B)\n");
	for(i=0;i<10;i++)
	{
		for(j=10;j>i;j--)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	
	printf("(C)\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=10;j>i;j--)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	
	printf("(D)\n");
	for(i=0;i<10;i++)
	{
		
		for(j=10;j>i;j--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	
	
	return 0;
}
