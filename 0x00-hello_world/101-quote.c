#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote in the standard error
 * Return: to 1 if successful
*/

int main(void)
{
	write(2, "and that piece of art is very useful - Dora Kopar, 2015-10-19\n", 58);
	return (1);
}
