#include <stdio.h>

/**
 * main - print alphabets in reverse
 * Description: print using putchar function
 * Return: Always 0
 **/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
