#include "libft.h"
#include <string.h>
#include <unistd.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);	
}