// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1,
// or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>
// ----->   ????????

#include <unistd.h>

// check if the nr are prime or not
int	ft_checker(int a)
{
	int	i;

	i = 2;
	while (i * i <= a)
	{
		if (a % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// sum of the nr that are prime
int	the_sum(int a)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i <= a)
	{
		if (ft_checker(i) == 1)
			sum = sum + i;
		i++;
	}
	return (sum);
}

void	nbr_conv(int b)
{
	int	a;

	a = the_sum(b);
	if (a <= 9)
	{
		a = a + '0';
		write(1, &a, 1);
	}
	else
	{
		nbr_conv(a / 10);
		a = a % 10 + '0';
		write(1, &a, 1);
	}
}

int	main(int ac, char **av)
{
	if (ac != 2 || av[1][0] <= 0)
		write(1, "0\n", 2);
	else
	{
		nbr_conv(av[1][0] - '0');
		write(1, "\n", 1);
	}
	return (0);
}
