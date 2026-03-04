# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

/**
 * @brief - Calculates the length of a string (excluding the null terminator).
 * 
 * @param str - The string whose length is to be measured.
 * @return size_t - The number of characters in the string
 * 					before the null terminator.
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * @brief - Allocates new memory and creates a duplicate of the given string.
 * 
 * @param str - The string to duplicate.
 * @return char* - A pointer to the newly allocated copy of the string,
 * 					or NULL if memory allocation fails.
 */
char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	len = ft_strlen(str);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
