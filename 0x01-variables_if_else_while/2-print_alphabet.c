#include <stdio.h>

/**
 * main - print alphabets in lower case
 * Description: this is done using putchar function
 * Return: 0
 **/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
