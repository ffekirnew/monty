#include "monty.h"

/**
 * main - entry point to the program monty
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 for success, 1 for failure
 */
int main(int argc, char const *argv[])
{
	/*
	trying to open the file here with the system call open() into fd
	*/
	int fd;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	fd = open(fd, O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}


	return (0);
}