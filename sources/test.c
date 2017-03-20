#include "libft.h"

int	main()
{
	char *ptr;

	ptr = ft_itoa(0);
	ft_putstr(ptr);
	free(ptr);
	return (0);
}
