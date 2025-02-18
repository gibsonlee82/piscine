//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return 0;
		}
		str++;
	}
	return 1;
}

/*
void	main(void)
{
	char *a = "DFSD";
	char *b = "asfd asfd\n";
	char *c = "asfDDFasdf\t";
	char *d = "";
	printf("%s: %i\n", a, ft_str_is_printable(a));
	printf("%s: %i\n", b, ft_str_is_printable(b));
	printf("%s: %i\n", c, ft_str_is_printable(c));
	printf("%s: %i\n", d, ft_str_is_printable(d));
}
*/
