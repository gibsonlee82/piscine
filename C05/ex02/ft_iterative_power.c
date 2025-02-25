int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	result = 1;	
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
void	main(void)
{
	printf("5^%s: %d\n", "-2", ft_iterative_power(5, -2));
	printf("0^%s: %d\n", "0", ft_iterative_power(0, 0));
	printf("0^%s: %d\n", "1", ft_iterative_power(0, 1));
	printf("5^%s: %d\n", "2", ft_iterative_power(5, 2));
	printf("5^%s: %d\n", "3", ft_iterative_power(5, 3));
	printf("5^%s: %d\n", "4", ft_iterative_power(5, 4));
}
*/
