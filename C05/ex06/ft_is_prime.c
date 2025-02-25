int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

void	main(void)
{
	printf("%s is prime: %d\n", "-1", ft_is_prime(-1));
	printf("%s is prime: %d\n", "0", ft_is_prime(0));
	printf("%s is prime: %d\n", "1", ft_is_prime(1));
	printf("%s is prime: %d\n", "2", ft_is_prime(2));
	printf("%s is prime: %d\n", "3", ft_is_prime(3));
	printf("%s is prime: %d\n", "4", ft_is_prime(4));
	printf("%s is prime: %d\n", "7", ft_is_prime(7));
	printf("%s is prime: %d\n", "100", ft_is_prime(100));
	printf("%s is prime: %d\n", "101", ft_is_prime(101));
}
*/
