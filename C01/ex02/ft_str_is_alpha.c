//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
	char *a = "Hello";
	char *b = "Hello\n";
	char *c = "I am";
	printf("%s: %i\n", a, ft_str_is_alpha(a));
	printf("%s: %i\n", b, ft_str_is_alpha(b));
	printf("%s: %i\n", c, ft_str_is_alpha(c));
}
*/
