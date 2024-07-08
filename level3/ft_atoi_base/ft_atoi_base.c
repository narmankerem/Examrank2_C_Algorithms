int ft_atoi_base(const char *str, int str_base)
{
	int result;
	int i;
	int sign;
	
	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * str_base + str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
		{
			result = result * str_base;
			result = result + str[i] - 'a' + 10;
		}
		else if (str[i] >= 'A' && str[i] <= 'F')
		{
			result = result * str_base;
			result = result + str[i] - 'A' + 10;
		}
		else
			return (result * sign);
		
		i++;
	}
	return (result * sign);

}