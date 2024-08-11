/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:21:03 by onosul            #+#    #+#             */
/*   Updated: 2024/08/11 19:21:07 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if (*temp >= 'A' && *temp <= 'Z')
		{
			*temp = *temp + 32;
		}
		temp++;
	}
	return (str);
}
