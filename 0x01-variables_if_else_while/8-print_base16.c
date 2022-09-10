#include <stdio.h>

/**
 * main - print numbers in base sixteen
 *
 * Description: using main function
 * this program prints "numbers in base sixteen in lowercase
 * Return: 0
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}

