int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i < nb && !(i * i == nb))
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*
#include <stdio.h>

void	main(void)
{
	printf("ft_sqrt(%s): %d\n", "-3", ft_sqrt(-3));
	printf("ft_sqrt(%s): %d\n", "0", ft_sqrt(0));
	printf("ft_sqrt(%s): %d\n", "1", ft_sqrt(1));
	printf("ft_sqrt(%s): %d\n", "2", ft_sqrt(2));
	printf("ft_sqrt(%s): %d\n", "4", ft_sqrt(4));
	printf("ft_sqrt(%s): %d\n", "5", ft_sqrt(5));
	printf("ft_sqrt(%s): %d\n", "16", ft_sqrt(16));
}
*/
