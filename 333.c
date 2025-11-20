#include <stdio.h>
/*
void ft_swap(int *a, int *b)
{
	int	x;
	
	x = *a;
	*a = *b;
	*b = x;
}

int	main(void)
{
	int gg = 15;
	int gj = 3;
	int *a = &gg;
	int *b = &gj;

	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}
*/

void ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

int	main(void)
{
	int c = 15;
	int d = 3;
	int *a = &c;
	int *b = &d;

	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}
