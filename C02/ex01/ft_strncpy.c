//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*new;

	new = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return new;
}

/*
void	main(void)
{
	char	*s;
	char	*d;

	s = "hello\n";
	printf("%s\n", s);
	d = ft_strncpy(d, s, 3);
	printf("%s\n", d);
}
*/
