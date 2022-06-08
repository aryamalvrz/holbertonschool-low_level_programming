#include <stdio.h>
/**
 * main - Alphabet in lowercase, then in uppercase, followed by a new line
 *Return: 0
 */
int main(void)
{
	char lowalpha = 'a';
	char upalpha = 'A';

	while (lowalpha <= 'z')
	{
		putchar(lowalpha);
		lowalpha++;
	}
	while (upalpha <= 'Z')
	{
		putchar(upalpha);
		upalpha++;
	}
	putchar('\n');
	return (0);
}
