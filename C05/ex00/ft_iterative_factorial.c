int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>

void	main(void)
{
	printf("%s!: %d\n", "-2", ft_iterative_factorial(-2));
	printf("%s!: %d\n", "0", ft_iterative_factorial(0));
	printf("%s!: %d\n", "1", ft_iterative_factorial(1));
	printf("%s!: %d\n", "2", ft_iterative_factorial(2));
	printf("%s!: %d\n", "3", ft_iterative_factorial(3));
	printf("%s!: %d\n", "4", ft_iterative_factorial(4));
}
*/
