#include "libft.h"

static size_t	ft_count(const char *str, char c)
{
	const char	*ptr;
	size_t		count;

	ptr = str;
	count = 0;
	while (*ptr)
	{
		if (*ptr == c)
			count++;
		ptr++;
	}
	return (count + 1);
}

static void	ft_free(char **result, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(const char *s, char c)
{
	const char	*start;
	char		**result;
	size_t		index;

	result = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	start = s;
	index = 0;
	while (*s)
	{
		if (*s == c)
		{
			result[index] = malloc(s - start + 1);
			if (result[index] == NULL)
				return (ft_free(result, index), NULL);
			ft_strncpy(result[index++], start, s - start);
			start = s + 1;
		}
		s++;
	}
	result[index] = malloc(s - start + 1);
	if (result[index] == NULL)
		return (ft_free(result, index), NULL);
	ft_strncpy(result[index], start, s - start);
	result[++index] = NULL;
	return (result);
}
