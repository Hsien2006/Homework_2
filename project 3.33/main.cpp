#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int x,y,z,i,j,t;
	for(i=0;i<3;i++)
	{
		for(j=0;j<12;j++)
		{
			if((i==0)||(i==2)||(j==0)||(j==11))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
