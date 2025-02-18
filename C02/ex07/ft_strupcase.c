//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
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

	printf("%s: %s", a, ft_strupcase(a));
	printf("%s: %s", b, ft_strupcase(b));
	printf("%s: %s", c, ft_strupcase(c));
}
*/
