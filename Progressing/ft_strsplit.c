/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 13:20:29 by spochez           #+#    #+#             */
/*   Updated: 2015/01/11 03:45:22 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char *s, unsigned int start, size_t len);
int		ft_strlen(char *s);

void		ft_put_in(char **res, char *s, char c)
{
	int				i;
	int				j;
	int				start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			start = i;
			j = 1;
		}
		if (s[i] == c && j == 1)
		{
			*res = ft_strsub(s, start, i - start);
			++res;
			j = 0;
		}
		i++;
	}
	if (j == 1)
		*res = ft_strsub(s, start, i - start);
}

static int		ft_count_str(char *s, char c)
{
	int				i;
	int				count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		count++;
	}
	return (count);
}

char			**ft_strsplit(char *s, char c)
{
	char			**res;
	unsigned int	len;

	if (s)
	{
		len = ft_count_str(s, c);
		res = NULL;
		res = (char **)malloc(sizeof(char *) * (len + 1));
		if (!res)
			return (NULL);
		ft_put_in(res, (char *)s, c);
		res[len] = 0;
		len = 0;
		return (res);
	}
	return (NULL);
}
