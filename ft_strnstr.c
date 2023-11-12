#include "libft.h"

/* 
	DESCRIPTION:
				The strnstr() function locates the first occurrence of the null-terminated 
				string needle in the string haystack, where not more than len characters are 
				searched.  Characters that appear after a ‘\0’ character are not searched.

	RETURN VALUES:
				If needle is an empty string, haystack is returned; if needle occurs nowhere 
				in haystack, NULL is returned; otherwise a pointer to the first character of 
				the first occurrence of needle is returned.
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int result;
	size_t needle_len;

	if(!needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	if (ft_strlen(haystack) < needle_len || len == 0)
		return (NULL);
	result = ft_strncmp(haystack, needle, len);
	if (result == 0)
		return ((char *)haystack);
	i = 0;
	while (result != 0 && i < len && (len - i) >= needle_len)
	{
		result = ft_strncmp((char *)haystack + i, (char *)needle, needle_len);
		if (result == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}