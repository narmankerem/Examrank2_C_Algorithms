#include <unistd.h>

int is_in_string(char *str, char c)
{
	int i;
	i = 0;

	while(str[i])
	{
		if (str[i] == c)
			return (1);
		
		i++;
	}
	return (0);
}

void union_str(char *str1, char *str2)
{
    char seen[256] = {0};
    int i = 0;

    while (*str1)
    {
        if (!has_char(seen, *str1))
        {
            seen[i] = *str1;
            write(1, str1, 1);
            i++;
        }
        str1++;
    }
    while (*str2)
    {
        if (!has_char(seen, *str2))
        {
            seen[i] = *str2;
            write(1, str2, 1);
            i++;
        }
        str2++;
    }
}

int main(int argc, char const *argv[])
{
	if(argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);

	return 0;
}