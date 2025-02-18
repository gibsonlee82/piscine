//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}

	return str;
}

/*
void	main(void)
{
	char	a[] = "How are you";
	char	b[] = "Hwer8 sadf09";
	char	c[] = "87778  97\n";

	printf("%s: %s", a, ft_strlowcase(a));
	printf("%s: %s", b, ft_strlowcase(b));
	printf("%s: %s", c, ft_strlowcase(c));
}
*/
