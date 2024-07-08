#include <unistd.h>
#include <stdio.h>

void put_nbr(int number)
{
	if(number > 9)
		put_nbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

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

int is_prime(int number)
{
	int i;
	i = 2;
	if (number == 2)
		return (1);
	if (number == 3)
		return (1);
	// 10
	while(i * i <= number)
	{
		if(number % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{

		int i;
		i = 2;
		int prime_adder;
		prime_adder = 0;
		while(i <= ft_atoi(argv[1]))
		{
			if(is_prime(i))
			{
				prime_adder += i;
			}
			i++;
		}
		put_nbr(prime_adder);
	}

	if(argc != 2)
		put_nbr(0);
	write(1, "\n", 1);
	return 0;
}