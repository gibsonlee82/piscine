int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

void	main(void)
{
	printf("fibonacci of %s is %d\n", "-3", ft_fibonacci(-3));
	printf("fibonacci of %s is %d\n", "0", ft_fibonacci(0));
	printf("fibonacci of %s is %d\n", "1", ft_fibonacci(1));
	printf("fibonacci of %s is %d\n", "2", ft_fibonacci(2));
	printf("fibonacci of %s is %d\n", "3", ft_fibonacci(3));
	printf("fibonacci of %s is %d\n", "4", ft_fibonacci(4));
	printf("fibonacci of %s is %d\n", "5", ft_fibonacci(5));
	printf("fibonacci of %s is %d\n", "6", ft_fibonacci(6));
}
*/
