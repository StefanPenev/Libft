#include "libft.h"

/* 
	DESCRIPTION:
				The strrchr() function is identical to strchr(), except it locates the last 
				occurrence of c.

				The strchr() function locates the first occurrence of c (converted to a char) 
				in the string pointed to by s.The terminating null character is considered to 
				be part of the string; therefore if c is ‘\0’, the functions locate the 
				terminating ‘\0’.

	RETURN VALUES:
				The function strrchr() return a pointer to the located character, 
				or NULL if the character does not appear in the string.
 */

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr_s;

	ptr_s = (char *)s;
	i = ft_strlen(s);
	while (i != 0)
	{
		if (ptr_s[i] == (char)c)
			return (ptr_s + i);
		i--;
	}
	return (NULL);
}