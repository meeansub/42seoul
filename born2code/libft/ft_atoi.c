#include "libft.h"

int ft_isspace(char str)
{
	if(9 <= str && str <= 13 || str == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int sign;
	int i;
	int result;

	i = 0;
	while (ft_isspace(str[i]) == 1)
	{
		i++;
	}
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
