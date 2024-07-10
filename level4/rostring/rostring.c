#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char **ft_split(char *str)
{
	int i,j,k;
	i = 0;

	char **split;

	split = (char **)malloc(sizeof(char) * 256);
	if(!split)
		return(NULL);

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		split[k] = (char *)malloc(sizeof(char) * 4096);
		if(!split[k])
			return(NULL);
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = 0;
		k++;
	}
	split[k] = 0;

	return(split);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		i = 1;
		char **split;
		split = ft_split(argv[1]);

		while(split[i])
		{
			ft_putstr(split[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(split[0]);
	}

	else if(argc > 2)
		ft_putstr(argv[1]);
	

	write(1, "\n", 1);
	return 0;
}