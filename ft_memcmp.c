#include "libft.h"

/* 
	DESCRIPTION:
				The memcmp() function compares byte string s1 against byte string s2.
				Both strings are assumed to be n bytes long.

	RETURN VALUES:
				 The memcmp() function returns zero if the two strings are identical, 
				 otherwise returns the difference between the first two differing bytes 
				 (treated as unsigned char values.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptr_s1;
	char	*ptr_s2;

	ptr_s1 = (char *)s1;
	ptr_s2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}