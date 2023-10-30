#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
FILE *file = fopen(filename, "w");

if (file == NULL)
{
perror("Error creating file");
return (-1);
}

if (text_content != NULL)
{
fprintf(file, "%s", text_content);
}

fclose(file);
return (1);
}
