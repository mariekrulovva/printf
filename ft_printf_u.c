/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:48:10 by bcriston          #+#    #+#             */
/*   Updated: 2021/12/02 18:28:51 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int num)
{
	char	*str;
	int		result;

	str = ft_itoa(num, 10);
	if (str == NULL)
		return (0);
	result = write(1, str, ft_strlen(str));
	free(str);
	return (result);
}
