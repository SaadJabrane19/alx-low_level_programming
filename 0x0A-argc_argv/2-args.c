#include <stdio.h>
#include "main.h"
/**
 * main - the main function of the program
 * @argc : argument count
 * @argv : argument value
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
