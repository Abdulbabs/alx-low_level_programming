#include "main.h"

/**
 * times_table - prints de 9 time table, starting with 0
 *
 * return: empty output
 */
void times_table(void)
{
	int n, i;
	printf("Enter an integer: ");
	scanf("%d", &n);
	for (i = 0; i <= 9; ++i)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
	return 0;
}
