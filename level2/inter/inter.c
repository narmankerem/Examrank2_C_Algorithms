#include <unistd.h>

int is_char_in_string(char *str, char c)
{
	int i;
	i = 0;

	while(str[i])
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void inter(char *str1, char *str2)
{
	
	int i;
	i = 0;
	char stored[128] = {0};

	while(*str1)
	{
		if(is_char_in_string(str2, *str1) && !is_char_in_string(stored, *str1))
		{
			write(1, str1, 1);
			stored[i] = *str1;
			i++;
		}
		str1++;

	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);

	return 0;
}

	

	

