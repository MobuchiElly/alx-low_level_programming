#include "main.h"
/**
 *read_textfile - function reads a textfile and prints it to the POSIX stdout
 *
 *@filename: name of the file
 *
 *@letters: letters is the number of letters it should read and print
 *
 * Return: read and printed chars, or 0 if unsucessful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t count;
	FILE *fp;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	buff = (char *)malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		fclose(fp);
		return (0);
	}

	count = fread(buff, sizeof(char), letters, fp);
	if (count == 0 || ferror(fp))
	{
		fclose(fp);
		free(buff);
		return (0);
	}
	fclose(fp);
	free(buff);
	return (count);
}
