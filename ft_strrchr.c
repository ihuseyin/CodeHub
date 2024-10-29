#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurance;

	last_occurance = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			last_occurance = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (last_occurance);
}
