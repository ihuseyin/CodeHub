#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (NULL);
	i = 0;
	while (i <= len - needle_len)
	{
		j = 0;
		while (j < needle_len && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (j == needle_len)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
