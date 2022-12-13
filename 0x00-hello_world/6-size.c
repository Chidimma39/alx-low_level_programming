#include <stdio.h>
/**
 **main: print the various sizes of data types
 **Description: this is done using the printf function
 **Return: 0
 **/
int main(void)
{
	char c;
	int i;
	long int e;
	long long int r;
	float f;

	printf("Size of char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(e));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(r));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
