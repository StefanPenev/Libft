#include "libft.h"

/* 
	DESCRIPTION: 
				The calloc() function contiguously allocates enough space for count objects that 
			    are size bytes of memory each and returns a pointer to the allocated memory.  
			    The allocated memory is filled with bytes of value zero.

   RETURN VALUES: 
   				If successful, calloc() function return a pointer to allocated memory.  
	  		    If there is an error, they return a NULL pointer. 
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count && size && count > (4294967295 / size))
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}