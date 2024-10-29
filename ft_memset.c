#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (len--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (dest);
}
