#include<stdio.h>
#include<stdlib.h>
int main() 
{
 	int i ;
 	float a=5000,b, c,d;
 	for (i = 0; i < 15; i++)
 	{
  		a = a * 1.1;
 	}
 	printf("き狡单:%f\n", a);
 	a = 5000;
 	for (i = 0; i < 15; i++)
 	{
 	 	a = a * 1.105;
 	}
 	printf("き狡单:%f\n", a);
 	a = 5000;
 	for (i = 0; i < 15; i++)
 	{
  		a = a * 1.11;
 	}
	 printf("き狡单:%f\n", a);
 	a = 5000;
 	for (i = 0; i < 15; i++)
 	{
 		 a = a * 1.115;
 	}
 	printf("き狡单:%f\n", a);
 	a = 5000;
	 for (i = 0; i < 15; i++)
 	{
 	 a = a * 1.12;
 	}
 	printf("き狡单:%f\n", a);
    return 0;
}
