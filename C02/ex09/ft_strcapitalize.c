//#include <stdio.h>
char    ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 'a' + 'A';
	}

        return c;
}

char    ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c - 'A' + 'a';
	}

        return c;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || (i > 0 && str[i-1] == ' '))
		{
			str[i] = ft_toupper(str[i]);
		}
		else
		{
			str[i] = ft_tolower(str[i]);
		}
		i++;
	}

	return str;
}

/*
void	main(void)
{
	char	a[] = "  how are you";
	char	b[] = "Hwer8 sadf09";
	char	c[] = "8asfasdf  97";

	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));
	printf("%s\n", ft_strcapitalize(c));
}
*/
