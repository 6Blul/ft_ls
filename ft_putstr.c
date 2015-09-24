#include "ft_ls.h"

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}