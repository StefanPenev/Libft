#include "libft.h"

/* 
	DESCRIPTION: 
				The strlcat() function copy and concatenate strings with the same 
				input parameters and output result as snprintf(3).

   RETURN VALUES: 
   				The strlcat() function return the total length of the string tried 
				to create. That means the initial length of dst plus the length of 
				src. 
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	i = 0;
	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dstsize == 0)
		return (dstsize + src_size);
	while ((src[i] != '\0') && (i + dest_size < dstsize - 1))
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	if (dest_size < dstsize)
		return (dest_size + src_size);
	return (dstsize + src_size);
}