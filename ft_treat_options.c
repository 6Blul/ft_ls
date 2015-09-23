/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_options.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 17:58:55 by spochez           #+#    #+#             */
/*   Updated: 2015/09/23 18:12:02 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

// Tab : 0 = -l / 1 = -a / 2 = -r / 3 = -t / 4 = -R   

int		*ft_ls_options(char **tab, int len)
{
	int		*opt;

	opt = (int *)malloc(sizeof(int) * 5);
	ft_bzero(opt, 4);
}
