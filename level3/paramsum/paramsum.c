#include <unistd.h>

void ft_putnbr(int number)
{
	if (number > 9)
		ft_putnbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int main(int argc, char *argv[])
{
	(void)argv;
	if(argc > 1)
	{
		ft_putnbr(argc - 1);
	}

	else if(argc == 1)
		write(1, "0", 1);

	write(1, "\n", 1);

	return 0;
}