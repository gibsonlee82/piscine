#include <unistd.h>
//#include <stdio.h>
void	writehex(char c)
{
	char	hex[4];
	
	hex[0] = '\\';
	hex[1] = "0123456789abcdef"[c / 16]; // Get the first hex digit
	hex[2] = "0123456789abcdef"[c % 16]; // Get the second hex digit
	hex[3] = '\0';

	write(1, hex, 3);
}

void	ft_putstr_non_printable(char* str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			writehex(*str);
		}
		str++;
	}
}

/*
void	main(void)
{
	char*	str = "Hello\t World\n";

	printf("%s\n==========\n ", str);
	ft_putstr_non_printable(str);
	printf("\n");
}
*/
