#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	const unsigned char	*src_ptr;
	unsigned char		*dst_ptr;

	if (!dst && !src)
		return (0);
	src_ptr = (const unsigned char *)src;
	dst_ptr = (unsigned char *)dst;
	while (len-- > 0)
	{
		*dst_ptr++ = *src_ptr++;
	}
	return (dst);
}
