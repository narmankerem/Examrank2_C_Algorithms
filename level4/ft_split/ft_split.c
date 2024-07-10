#include <stdlib.h>

char **ft_split(char *str)
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