/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:41:03 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/26 13:41:04 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	s_size;
	size_t	index;

	s_size = ft_strlen(s);
	if (!(result = (char *)malloc(s_size + 1)))
		return (NULL);
	index = 0;
	while (index < s_size)
	{
		result[index] = s[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
