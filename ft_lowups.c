/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowups.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 02:23:25 by spochez           #+#    #+#             */
/*   Updated: 2016/01/14 02:23:27 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		ft_nexts(char *s1, char *s2, int i)
{
	int		tp;

	tp = i;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] - s2[i] != 32 && s1[i] - s2[i] != -32)
				return (ft_strcmp(s1, s2));
		}
		i++;
	}
	if (!s1[i] && !s2[i])
	{
		while (s1[tp] == s2[tp] && (s1[tp] || s2[tp]))
			tp++;
		if (ft_islower(s1[tp]))
			return (0);
		else
			return (1);
	}
	else if (!s1[i])
		return (1);
	return (0);
}

int		ft_diff_cases(char *s1, char *s2, int i)
{
	if (ft_strcmp(s1, s2) == 32 || ft_strcmp(s1, s2) == -32)
		return (ft_nexts(s1, s2, i));
	else
	{
		if (ft_islower(s1[i]))
		{
			if (s1[i] - 32 > s2[i])
				return (1);
		}
		if (ft_islower(s2[i]))
		{
			if (s2[i] - 32 < s1[i])
				return (1);
		}
	}
	return (0);
}

int		ft_lowups(char *s1, char *s2)
{
	int		i;

	i = 0;
	//printf("s1 = %s s2 = %s\n", s1, s2);
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (!ft_isalpha(s1[i]) || !ft_isalpha(s2[i]))
				return (ft_strcmp(s1, s2));
			else if (ft_isalpha(s1[i]) && ft_isalpha(s2[i]))
			{
				if (ft_islower(s1[i]) && ft_islower(s2[i]))
					return (ft_strcmp(s1, s2));
				else if (ft_isupper(s1[i]) && ft_isupper(s2[i]))
					return (ft_strcmp(s1, s2));
				else
					return (ft_diff_cases(s1, s2, i));
			}
		}
		i++;
	}
	return (0);
}
