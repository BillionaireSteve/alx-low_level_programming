#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("Id is positive\n",n);
	}
	else if (n -- 0)
	{
		printf("ID is zero\n", n);
	}
	else
	{
		printf("ID is negative\n",n);
	}
	/* your code goes there */
	return (0);
}
