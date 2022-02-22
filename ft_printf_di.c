/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:44:13 by bcriston          #+#    #+#             */
/*   Updated: 2021/12/02 18:28:29 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_di(int num)
{
	char	*str;
	int		result;

	if (num == -2147483648)
		return (write(1, "-2147483648", 11));
	result = 0;
	if (num < 0)
	{	
		write (1, "-", 1);
		num = -num;
		result += 1;
	}
	str = ft_itoa(num, 10);
	if (str == NULL)
		return (0);
	result += write(1, str, ft_strlen(str));
	free(str);
	return (result);
}
