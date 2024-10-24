#include <stdio.h>
#include<stdlib.h>

int main() {
    int side1, side2, hypotenuse;

    printf("Pythagorean triples for sides and hypotenuse no larger than 500:\n");

    for (side1 = 1; side1 <= 500; side1++) 
    {
        for (side2 = side1; side2 <= 500; side2++) 
        { 
            for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) 
            {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) 
                {
                    printf("(%d, %d, %d)\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}
