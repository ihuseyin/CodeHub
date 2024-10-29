#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (dst_ptr == src_ptr || len == 0)
		return (dst);
	if (dst_ptr < src_ptr)
	{
		while (len--)
		{
			*dst_ptr++ = *src_ptr++;
		}
	}
	if (dst_ptr >= src_ptr)
	{
		dst_ptr += len;
		src_ptr += len;
		while (len--)
		{
			*(--dst_ptr) = *(--src_ptr);
		}
	}
	return (dst);
}
