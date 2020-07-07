/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukim <minsukim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:10:50 by minsukim          #+#    #+#             */
/*   Updated: 2020/07/07 15:11:27 by minsukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (*(str + index) != '\0')
	{
		index++;
	}
	write(1, str, index);
}