/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:48:48 by pedrogon          #+#    #+#             */
/*   Updated: 2023/07/19 19:33:24 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(int c);
int	ft_pointer(unsigned long x, char *hexa);
int	ft_putstr(char *str);
int	ft_decimal(long int decimal, int len, char *sign);
int	ft_unsigned_int(unsigned int long n);
int	hexalower(unsigned int x, char *hexa);
int	hexauper(unsigned int x, char *hexa);

#endif