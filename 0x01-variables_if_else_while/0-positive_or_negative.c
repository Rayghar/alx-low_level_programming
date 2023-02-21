#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Initializes random number generator
 * to a random number between 
 * and prints whether the number is positive, zero, or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (n > 0)
        	printf("positive.\n");
	else if (n == 0)
         	printf("zero.\n");
    	else
	 	printf("negative.\n");
	printf("\n");
	return (0);
}
