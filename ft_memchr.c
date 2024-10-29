#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)b;
	ch = (unsigned char)c;
	while (0 < len)
	{
		if (*str == ch)
		{
			return ((void *)str);
		}
		str++;
		len--;
	}
	return (NULL);
}
