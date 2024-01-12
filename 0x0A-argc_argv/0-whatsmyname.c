#include "main.h"
#include <stdio.h>
/**
 * main - print the name of the program
 * @argc : argument count
 * @argv : argument value
 * Return: return always 0(success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
