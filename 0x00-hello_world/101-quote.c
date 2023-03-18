#include <stdio.h>
#include <unistd.h>
/**
 * main - This prints out a quote without using the printf and puts functions
 *
 * Return: Always 1 (Unsuccess)
 */
int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}
