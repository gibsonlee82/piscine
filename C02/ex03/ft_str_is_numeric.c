//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
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
	char *a = "3475982345";
	char *b = "3234 324";
	char *c = "2354ken";
	char *d = "";
	printf("%s: %i\n", a, ft_str_is_numeric(a));
	printf("%s: %i\n", b, ft_str_is_numeric(b));
	printf("%s: %i\n", c, ft_str_is_numeric(c));
	printf("%s: %i\n", d, ft_str_is_numeric(d));
}
*/
