#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024  // Fixed-size buffer for reading file content

// Function to display error messages
void	display_error(char *msg) 
{
	while (*msg)
	{
		write(2, msg, 1);  // Write each character to stderr
		msg++;
	}
}

int	main(int	argc, char **argv)
{
	int fd;
	ssize_t bytes_read;
	char buffer[BUF_SIZE];

	if (argc == 1)
	{
		display_error("File name missing\n");
		return 1;
	}
	else if (argc > 2)
	{
		display_error("Too many arguments\n");
		return 1;
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		display_error("Cannot read file\n");
		return 1;
	}
	while ((bytes_read = read(fd, buffer, BUF_SIZE)) > 0)
	{
		write(1, buffer, bytes_read);
	}
	close(fd);
	return (0);
}
