#include <stdio.h>
/**
 * main - that prints the size of various types on the computer it is compiled
 * Return: 0 when successful
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of an long long int: %ld byte(s)\n", sizeof(long
		long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
      	return (0);
}
