/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:24:36 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/26 13:24:36 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;
	size_t	total_size;
	size_t	i;

	total_size = count * size;
	if (!(result = (void *)malloc(total_size)))
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		result[i++] = 0;
	}
	return ((void *)result);
}
