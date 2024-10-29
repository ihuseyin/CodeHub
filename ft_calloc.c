#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = number * size;
	if (number != 0 && total_size / number != size)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}
