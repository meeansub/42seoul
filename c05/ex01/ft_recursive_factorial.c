int		ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb < 0)
		return 0;
	if (nb == 1 || nb == 2)
		return nb;			
	return nb * ft_recursive_factorial(nb - 1);
		
}