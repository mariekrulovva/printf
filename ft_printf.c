/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:02:47 by bcriston          #+#    #+#             */
/*   Updated: 2021/12/02 19:49:00 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_simvol(const char *str, int i, va_list arg)
{
	int	result;

	result = 0;
	if (str[i] == 's')
		result += ft_printf_s(va_arg(arg, char *));
	else if (str[i] == 'p')
		result += ft_printf_p(va_arg(arg, unsigned long int));
	else if (str[i] == 'd' || str[i] == 'i')
		result += ft_printf_di(va_arg(arg, int));
	else if (str[i] == 'u')
		result += ft_printf_u(va_arg(arg, unsigned int));
	else if (str[i] == 'x')
		result += ft_printf_x(va_arg(arg, unsigned int), 0);
	else if (str[i] == 'X')
		result += ft_printf_x(va_arg(arg, unsigned int), 1);
	else if (str[i] == '%')
		result += write (1, "%", 1);
	else
		result += ft_printf_c(va_arg(arg, int));
	return (result);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		result;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			result += ft_simvol(str, ++i, arg);
		else
			result += write (1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (result);
}
