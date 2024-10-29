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
	while (index--)
	{
		free(result[index]);
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

static int	ft_allocate(char **res, const char *srt, const char *end, size_t *i)
{
	res[*i] = malloc(end - srt + 1);
	if (res[*i] == NULL)
		return (0);
	ft_strncpy(res[*i], srt, end - srt);
	(*i)++;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	const char	*start;
	char		**result;
	size_t		index;

	if (!s)
		return (NULL);
	result = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	start = s;
	index = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (s > start && !ft_allocate(result, start, s, &index))
				return (ft_free(result, index), NULL);
			start = s + 1;
		}
		s++;
	}
	if (s > start && !ft_allocate(result, start, s, &index))
		return (ft_free(result, index), NULL);
	result[index] = NULL;
	return (result);
}
