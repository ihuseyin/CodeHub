#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)b1;
	str2 = (unsigned char *)b2;
	if (len == 0)
	{
		return (0);
	}
	while (0 < len)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
		len--;
	}
	return (0);
}
