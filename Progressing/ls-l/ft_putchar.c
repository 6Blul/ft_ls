/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 02:24:14 by spochez           #+#    #+#             */
/*   Updated: 2016/01/14 02:24:16 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_ls.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
