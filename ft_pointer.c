/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:01:50 by pedrogon          #+#    #+#             */
/*   Updated: 2023/07/19 19:29:59 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long x, char *hexa)
{
	int	len;

	len = 0;
	if (x >= 16)
		len += ft_pointer (x / 16, hexa);
	write (1, &hexa[x % 16], 1);
	len++;
	return (len);
}
