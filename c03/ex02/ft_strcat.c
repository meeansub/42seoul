char	*ft_strcat(char *dest, char *src)
{

	//char *temp;

	//temp = dest;
	while(*dest)
		++dest;
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = 0;
	return (dest);
}
