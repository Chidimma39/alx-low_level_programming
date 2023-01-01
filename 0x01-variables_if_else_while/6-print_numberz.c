#include <stdio.h>

/**
 * main - print single digits less than 10
 * Description: one is required to use only putchar
 * Return: Always 0
 **/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
}
