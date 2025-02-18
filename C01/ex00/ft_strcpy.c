//#include <stdio.h>
//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*dup;

	dup = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return dup;
}

/*
void	main(void)
{
	char*	s;
	char*	d;

	s = "hello";
	printf("Source: %s\n", s);
	d = ft_strcpy(d, s);
	printf("Dest: %s\n", d);
}
*/
