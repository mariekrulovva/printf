/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:55:13 by bcriston          #+#    #+#             */
/*   Updated: 2021/12/02 19:41:10 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(unsigned long int n, int base)
{
	char			*str;
	unsigned long	m;
	int				len;

	len = 0;
	if (n == 0)
		len = 1;
	m = n;
	while (m > 0 && len++ > -1)
		m = m / base;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		if (n % base > 9)
			str[len-- - 1] = n % base + 'a' - 10;
		else
			str[len-- - 1] = n % base + '0';
		n = n / base;
	}
	return (str);
}
