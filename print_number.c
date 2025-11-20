#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_number(int n)
{
	ft_putchar (n / 10 + '0');
}

void ft_xd(void)
{

int b;

b = 22;

print_number(b);
}

int	main(void)
{
	ft_xd();
}
