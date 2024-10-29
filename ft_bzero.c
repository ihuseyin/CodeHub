#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
	{
		*ptr++ = 0;
	}
}
