#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int x;
	
	x = 0;
	ft_ft(&x);
	printf("%d\n", x);
}
