#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <libgen.h>

#define BUFFER_SIZE 30000

void	print_error(const char *file)
{
	// Print error message using strerror
	write(2, "ft_cat: ", 8);
	write(2, file, strlen(file));
	write(2, ": ", 2);
	write(2, strerror(errno), strlen(strerror(errno)));
	write(2, "\n", 1);
}

void	ft_cat(int fd)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	// Read file in chunks and write to standard output
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
		print_error("Error reading file");
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_cat(0); // If no files are given, read from stdin
	else
	{
        	int	i;
		int	fd;

		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
			{
				print_error(argv[i++]);
				continue ;
			}
			ft_cat(fd);
			close(fd);
			i++;
		}
		close(fd);
	}
	return (0);
}
