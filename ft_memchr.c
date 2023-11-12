#include "libft.h"

/* 
	DESCRIPTION:
				The memchr() function locates the first occurrence of c (converted 
                to an unsigned char) in string s.

	RETURN VALUES:
				The memchr() function returns a pointer to the byte located, or 
                NULL if no such byte exists within n bytes.
 */

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *ptr_s;

    ptr_s = (char *)s;
    i = 0;
    while (i < n)
    {
        if (ptr_s[i] == (unsigned char)c)
            return (ptr_s + i);
        i++;
    }
    return (NULL);
}