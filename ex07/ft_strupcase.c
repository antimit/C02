/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:21:23 by onosul            #+#    #+#             */
/*   Updated: 2024/08/11 19:21:26 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp = *temp - 32;
		}
		temp++;
	}
	return (str);
}
