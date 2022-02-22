/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:53:16 by bcriston          #+#    #+#             */
/*   Updated: 2021/12/02 18:28:58 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned int num, int x)
{
	char	*str;
	int		i;
	int		result;

	i = 0;
	str = ft_itoa(num, 16);
	if (x == 1)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'f')
				str[i] -= 32;
			i++;
		}
	}
	result = write(1, str, ft_strlen(str));
	free(str);
	return (result);
}
