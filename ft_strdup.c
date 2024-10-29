#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	char	*original_dest;

	original_dest = dst;
	while (*src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (original_dest);
}

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(str);
	duplicate = malloc(len + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	ft_strcpy(duplicate, str);
	return (duplicate);
}
