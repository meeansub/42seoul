/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:50:23 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/15 15:58:31 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int x;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	x = 0;
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
