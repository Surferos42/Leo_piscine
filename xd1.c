/*Write a program that taked a string, and displays the first 'z'*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "z\n", 2);
}
