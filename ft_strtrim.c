#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*start;
	const char	*end;
	char		*str;
	size_t		length;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && ft_strchr(set, *start))
	{
		start++;
	}
	end = s1 + ft_strlen(s1) - 1;
	while (start < end && ft_strchr(set, *end))
	{
		end--;
	}
	length = end - start + 1;
	str = malloc(length + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, start, length + 1);
	return (str);
}
