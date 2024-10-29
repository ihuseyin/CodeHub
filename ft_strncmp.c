#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	if (len == 0)
	{
		return (0);
	}
	while (*s1 && *s2 && 0 < len)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		len--;
	}
	return (*s1 - *s2);
}
