int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
	
}

/*
#include <stdio.h>

void	main(void)
{
	printf("%s!: %d\n", "-2", ft_recursive_factorial(-2));
	printf("%s!: %d\n", "0", ft_recursive_factorial(0));
	printf("%s!: %d\n", "1", ft_recursive_factorial(1));
	printf("%s!: %d\n", "2", ft_recursive_factorial(2));
	printf("%s!: %d\n", "3", ft_recursive_factorial(3));
	printf("%s!: %d\n", "4", ft_recursive_factorial(4));
}
*/
