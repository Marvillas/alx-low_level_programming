#include "stdio.h"
#include "stdlib.h"
#include "time.h"

/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * Return: 0 on success
 */
int main(void)
{
	int sum, rand_num;
	char c;

	srand(time(NULL));
	sum = 0;

	while (sum < 2772 - 122)
	{
		rand_num = rand() % 62;
		if (rand_num < 26)
			c = 'A' + rand_num;
		else if (rand_num < 52)
			c = 'a' + rand_num - 26;
		else
			c = '0' + rand_num - 52;

		putchar(c);
		sum += c;
	}

	putchar(2772 - sum);
	putchar('\n');
	return (0);
}
