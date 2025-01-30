#include "libft.h"

static size_t	ft_count(long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		index;
	long	num;
	char	*str;

	num = n;
	index = ft_count(num);
	str = malloc(index + 1);
	if (str == NULL)
		return (NULL);
	str[index] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		str[--index] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
