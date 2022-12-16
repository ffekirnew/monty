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
	char *buffer, *line, *next;
	/*
	trying to open the file here with the system call open() into fd
	*/
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	buffer = read_file(argv[1]);


	line = strtok(buffer, "\n");
	while (line != NULL)
	{
		line = strtok(NULL, "\n");
	}
	return (0);
}

/**
 * read_file - reads the given file
 * @filename: the path to the file needed to be read
 *
 * Return: a string containing the contents of the file
*/
char *read_file(const char *filename)
{
	char * buffer = 0;
	long length;
	FILE * f = fopen (filename, "rb");

	if (f)
	{
		fseek (f, 0, SEEK_END);
		length = ftell (f);
		fseek (f, 0, SEEK_SET);
		buffer = malloc (length);
		if (buffer)
			fread (buffer, 1, length, f);
		else
		{
			printf("Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		fclose (f);
	}
	else
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	return (buffer);
}

char *temp(char *string)
{
	return (strtok(string, "\n "));
}