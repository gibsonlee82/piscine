int     ft_is_prime(int nb)
{
        int     i;

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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime(i))
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

void	main(void)
{
	printf("next prime for %s is %d\n", "-5", ft_find_next_prime(-5));
	printf("next prime for %s is %d\n", "0", ft_find_next_prime(0));
	printf("next prime for %s is %d\n", "1", ft_find_next_prime(1));
	printf("next prime for %s is %d\n", "2", ft_find_next_prime(2));
	printf("next prime for %s is %d\n", "3", ft_find_next_prime(3));
	printf("next prime for %s is %d\n", "6", ft_find_next_prime(6));
	printf("next prime for %s is %d\n", "11", ft_find_next_prime(11));
	printf("next prime for %s is %d\n", "100", ft_find_next_prime(100));
	printf("next prime for %s is %d\n", "200", ft_find_next_prime(200));
}
*/
