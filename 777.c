#include <stdio.h>

int ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*(str + size))
		++size;
	return (size);
}

int	main()
{
	char *s;

	s = "lol";
	printf("%d\n", ft_strlen(s));
}
