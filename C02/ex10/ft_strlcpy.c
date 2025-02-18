//#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*new;
	int	n;
	
	n = 0;
	new = dest;
	while (*src != '\0')
	{
		if (n < size)
		{
			*dest = *src;
			dest++;
		}
		src++;
		n++;
	}

	*dest = '\0';

	return n;
}

/*
void	main(void)
{
	char	*s;
	char	d[10];
	int	n;

	s = "hello world\n";
	printf("%s\n", s);
	n = ft_strlcpy(d, s, 9);
	printf("%i\n", n);
}
*/
