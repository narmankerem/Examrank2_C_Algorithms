#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static void ft_putchar(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


static char **ft_split(char *str)
{
	int i,j,k;
	i = 0;
	k = 0;
	char **split;

	split = (char **)malloc(sizeof(char) * 256);
	if (!split)
		return(NULL);

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		split[k] = (char *)malloc(sizeof(char) * 4096);
		if (!split[k])
			return(NULL);

		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];

		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' )
			i++;
		split[k][j] = 0;
		k++;
	}

	split[k] = 0;
	return (split);
}




int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char **split;
		int i;
		i = 0;
		
		split = ft_split(argv[1]);
		while(split[i])
			i++;
		
		
		i--;
		while(i >= 0)
		{
			ft_putchar(split[i]);
			if(i > 0)
				write(1, " ", 1);
			i--;
		}
	}

	write(1, "\n", 1);
	return 0;
}