#include <unistd.h>

int ft_atoi(char *str)
{
	int result;
	result = 0;
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}

	return (result);

}

void ft_putnbr(int number)
{
	if(number > 9)
		ft_putnbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}


int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		i = 1;
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(ft_atoi(argv[1]));
			write(1, " = ", 3);
			ft_putnbr(ft_atoi(argv[1]) * i);
			if(i != 9)
				write(1, "\n", 1);
			i++;
		}

	}
	write(1, "\n", 1);

	return 0;
}