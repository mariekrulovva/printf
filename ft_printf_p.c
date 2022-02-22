/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:33:57 by bcriston          #+#    #+#             */
/*   Updated: 2021/12/02 19:42:10 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(unsigned long int num)
{
	char	*str;
	int		result;

	result = write(1, "0x", 2);
	str = ft_itoa(num, 16);
	result += write(1, str, ft_strlen(str));
	free(str);
	return (result);
}
