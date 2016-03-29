#include <stdio.h>

int main()
{
	int		i;
	int		len;

	i = 0;
	len = 3;
	while (i <= len && (i == 2 || i == 1 || i == 0))
		i++;
	printf("i = %i\n", i);
	return 0;
}