#include "libft.h"

static size_t	ft_count(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
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
	int		is_negative;
	int		i;
	int		num;
	char	*str;

	i = ft_count(n);
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	str[i] = '\0';
	while (n != 0)
	{
		num = n % 10;
		str[--i] = num + '0';
		n /= 10;
	}
	if (is_negative)
		str[--i] = '-';
	return (str);
}
