/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 02:23:15 by spochez           #+#    #+#             */
/*   Updated: 2016/01/14 02:23:19 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isalpha(char c)
{
	return (ft_isupper(c) || ft_islower(c));
}
