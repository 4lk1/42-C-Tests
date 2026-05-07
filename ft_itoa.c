// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <stdlib.h>

int	ft_len(int n)
{
	int	len = 0;

	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		len;
	char	*str;

	n = nbr;
	len = ft_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';

	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}

	if (n == 0)
		str[0] = '0';

	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}

	return (str);
}
