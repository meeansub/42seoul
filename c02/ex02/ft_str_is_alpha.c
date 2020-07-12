/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 19:32:01 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/09 19:32:52 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	if ( *str == '\0')
		return 1;
	while (*str != '\0')
	{
		char cp;

		cp = *(str++);
		if (!(cp >= 'a' && cp <= 'z') && !(cp >= 'A' && cp <= 'Z'))
		{
			return (0);
		}
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char s1[] = "12345avb";
	char s2[] = "avb";
	char s3[] = "avb1234";
	
	printf("%d", ft_str_is_alpha(s1));
	printf("%d", ft_str_is_alpha(s2));
	printf("%d", ft_str_is_alpha(s3));
	
}
