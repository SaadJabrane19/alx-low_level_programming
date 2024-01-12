#include <stdio.h>
#include "main.h"
/**
 * main - the main function of the program
 * @argc : argument count
 * @argv : argument value
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;/*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
