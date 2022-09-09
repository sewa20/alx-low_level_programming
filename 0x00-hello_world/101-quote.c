#include <stdio.h>
#include <stdlib.h>

/**
 * main - print using function
 *
 * Description: using the main function
 * this program prints "and that piece of art
 * Return 1
 */
int main(void)
{ 
	write(STDOUT_FILENO, "and that piece of art is useful
			\" -  Dora Korpar, 2015-10-19\n", 59);
	return (1);
