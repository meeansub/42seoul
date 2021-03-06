/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 14:02:14 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/26 14:02:15 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t num)
{
	unsigned char	*change_arr;
	unsigned char	value;
	size_t			i;

	change_arr = (unsigned char *)ptr;
	value = c;
	i = 0;
	while (i++ < num)
	{
		*change_arr++ = value;
	}
	return (ptr);
}
