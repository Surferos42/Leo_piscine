/*Create a function that return the lenght of a string*/
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])/*Kiedy string nie dojdzie do /0 - [i] bedzie rosnac czyli i++;*/
		i++;
	return (i); /*In the end function returns numbers of counted characters*/
}

int	main(void)
{
	char *str = "Siemano";
	int	lenght;

	lenght = ft_strlen(str);
	printf("String: %s\nLenght: %d\n", str, lenght);
}
