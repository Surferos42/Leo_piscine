#include <stdio.h>

void	ft_ultimate_ft(int ******nbr)
{
	******nbr = 42;
}

int	main(void)
{
	int x;
	
	x = 0;
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;

	ft_ultimate_ft(p6);
	printf("%d\n", x);
}
