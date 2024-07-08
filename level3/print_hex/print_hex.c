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

void put_hexadecimal(int number)
{
	if (number > 15)
		put_hexadecimal(number / 16);
	write(1, &"0123456789abcdef"[number % 16], 1);
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		put_hexadecimal(ft_atoi(argv[1]));

	}

	write(1, "\n", 1);
	return 0;
}