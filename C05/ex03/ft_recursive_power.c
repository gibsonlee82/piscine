int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));	
}

/*
#include <stdio.h>
void	main(void)
{
	printf("5^%s: %d\n", "-2", ft_recursive_power(5, -2));
	printf("0^%s: %d\n", "0", ft_recursive_power(0, 0));
	printf("0^%s: %d\n", "1", ft_recursive_power(0, 1));
	printf("5^%s: %d\n", "2", ft_recursive_power(5, 2));
	printf("5^%s: %d\n", "3", ft_recursive_power(5, 3));
	printf("5^%s: %d\n", "4", ft_recursive_power(5, 4));
}
*/
