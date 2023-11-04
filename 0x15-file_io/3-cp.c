#include "main.h"
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
const char *file_from = argv[1];
const char *file_to = argv[2];
char buffer[BUFFER_SIZE];
int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
ssize_t bytes_read, bytes_written;
int fd_from = open(file_from, O_RDONLY);

if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
return (97); }
if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", file_from);
return (98); }
if (fd_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", file_to);
close(fd_from);
return (99); }
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(2, "Error: Can't write to %s\n", file_to);
close(fd_from);
close(fd_to);
return (99); }}
if (bytes_read == -1)
{
dprintf(2, "Error: Can't read from file %s\n", file_from);
close(fd_from);
close(fd_to);
return (98); }
if (close(fd_from) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
close(fd_to);
return (100); }
if (close(fd_to) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
return (100); }
return (0); }
