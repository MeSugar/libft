#include "libft.h"

int		main()
{
	char str[] = "hello world!\n";
	int len = ft_strlen(str);
	for (int i = 0; i < len; i++) 
		ft_putchar_fd(ft_toupper(str[i]), 1);
	return (0);
}
