#include <stdlib.h>

int ft_abs(int number)
{
	if(number < 0)
		return (-number);
	return (number);
}

int *ft_range(int start, int end)
{
	int len;
	int i;
	int *arr;

	i = 0;
	len = ft_abs(end - start) + 1;
	arr = (int *)malloc(sizeof(int) * len);

	while(i < len)
	{
		if(end < start)
		{
			arr[i] = start;
			start--;
		}
		else if(end >= start)
		{
			arr[i] = start;
			start++;
		}
		i++;
	}

	return (arr);
}