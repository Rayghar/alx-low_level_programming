#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number %d is ", n);
	if (n > 0)
        	printf("positive.\n");
	else if (n == 0)
         	printf("zero.\n");
    	else
	 	printf("negative.\n");
	printf("\n");
	return (0);
}