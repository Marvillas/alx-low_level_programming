#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int number_of_bytes, unsigned char *opcode);

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed
 * @argv: array of arguments as strings
 *
 * Return: 0 on success, 1 or 2 with an error message on failure
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;
	unsigned char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode = (unsigned char *)main;
	print_opcodes(number_of_bytes, opcode);

	return (0);
}

/**
 * print_opcodes - prints opcodes of a function
 * @number_of_bytes: number of bytes to print
 * @opcode: pointer to the function's opcodes
 */
void print_opcodes(int number_of_bytes, unsigned char *opcode)
{
	int i;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", opcode[i]);
		if (i < number_of_bytes - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
}
