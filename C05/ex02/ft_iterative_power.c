int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		return (nb * ft_iterative_power(nb, power - 1));	
	}
}

/*
#include <stdio.h>
void	main(void)
{
	printf("5^%s: %d\n", "-2", ft_iterative_power(5, -2));
	printf("5^%s: %d\n", "0", ft_iterative_power(5, 0));
	printf("5^%s: %d\n", "1", ft_iterative_power(5, 1));
	printf("5^%s: %d\n", "2", ft_iterative_power(5, 2));
	printf("5^%s: %d\n", "3", ft_iterative_power(5, 3));
	printf("5^%s: %d\n", "4", ft_iterative_power(5, 4));
}
*/
