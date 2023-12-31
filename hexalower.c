/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexalower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrogon <pedrogon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:18:00 by pedrogon          #+#    #+#             */
/*   Updated: 2023/07/19 19:32:54 by pedrogon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexalower(unsigned int x, char *hexa)
{
	int	len;

	len = 0;
	if (x >= 16)
		len += hexalower (x / 16, hexa);
	write (1, &hexa[x % 16], 1);
	len++;
	return (len);
}
