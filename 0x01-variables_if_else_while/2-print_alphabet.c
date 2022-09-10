#include <stdio.h>

/**
 * main - print alphabet
 *
 * Description: using the main function
 * this program prints "alphabet in lower case,
 * Return 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}

