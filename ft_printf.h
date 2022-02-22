/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:53:05 by bcriston          #+#    #+#             */
/*   Updated: 2021/12/02 19:45:11 by bcriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf_c(char c);
int		ft_printf_di(int num);
int		ft_printf_p(unsigned long int num);
int		ft_printf_s(char *str);
int		ft_printf_u(unsigned int num);
int		ft_printf_x(unsigned int num, int x);
int		ft_printf(const char *str, ...);
char	*ft_itoa(unsigned long int n, int base);
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);

#endif