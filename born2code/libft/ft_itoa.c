#include "libft.h"

size_t	get_len(int n)
{
	size_t len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char *result;
	size_t len;
	size_t i;

	len = get_len(n);
	if (!(result = (char *)malloc(len + 1)))
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
		i = 1;
	}
	else
		i = 0;
	while (i < len)
	{
		len--;
		result[len] = '0' + n % 10;
		n /= 10;
	}
	return (result);
}