/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:44:30 by minsukim          #+#    #+#             */
/*   Updated: 2020/10/26 15:17:59 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		str_in_set(char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && str_in_set(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && str_in_set(s1[end - 1], set))
		end--;
	if (!(result = malloc(end - start + 1)))
		return (NULL);
	i = 0;
	while (start < end)
	{
		result[i++] = s1[start++];
	}
	result[i] = '\0';
	return (result);
}
