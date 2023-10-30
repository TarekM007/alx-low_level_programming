#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file = fopen(filename, "r");
char *buffer = (char *)malloc(letters * sizeof(char));
ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

if (file == NULL)
{
perror("Error opening file");
return (-1);
}

if (buffer == NULL)
{
perror("Error allocating memory");
fclose(file);
return (-1);
}
if (bytesRead < 0)
{
perror("Error reading file");
fclose(file);
free(buffer);
return (-1);
}

if (bytesWritten < 0)
{
perror("Error writing to standard output");
fclose(file);
free(buffer);
return (-1);
}

fclose(file);
free(buffer);
return (bytesWritten);
}
