#include <stdio.h>
#include <time.h>                                                                                                               
/* more header goes there */                                                     
/* betty style doc for main goes here */

int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 5)
	{
		printf(" and is less than 5\n");
	}
	else if (n == 0)
	{
		printf(" and is 0\n");
	}
	else if ( n < 6 && != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}            
