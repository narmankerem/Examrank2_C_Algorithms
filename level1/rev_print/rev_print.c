#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{

		int len;
		len = ft_strlen(argv[1]);

		while(argv[1][len - 1])
		{
			write(1, &argv[1][len - 1], 1);
			len--;
		}
	}

	write(1, "\n", 1);

	return 0;
}