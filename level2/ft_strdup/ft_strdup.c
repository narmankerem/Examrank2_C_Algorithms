#include <stdlib.h>

char *ft_strdup(char *src)
{
	int len;
	int i;

	char *dup;
	i = 0;
	len = 0;

	if(src[0] != '\0')
	{
		while(src[len])
			len++;
	}

	dup = (char *)malloc(sizeof(char *) * len + 1);

	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}

	if(!dup)
		return(NULL);

	return(dup);

}