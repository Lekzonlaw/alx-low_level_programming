#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print whether the number stored in the variable
 *        positive, negative or zero.
 *
 *        Return:Always 0.
 */
int main(void)
{
	int n;
	
	srand(time(o));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		print("%d is zero\n", n);
	return (0);
}
