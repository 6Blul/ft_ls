/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:07:44 by spochez           #+#    #+#             */
/*   Updated: 2015/01/11 03:44:11 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_ls.h"
#include <stdlib.h>

char	*ft_strcat(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
int		ft_strlen(char *s);

char	*ft_strjoin(char *s1, char *s2)
{
	int		len1;
	int		len2;
	int		nlen;
	char	*new;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		nlen = len1 + len2;
		new = malloc(sizeof(char) * nlen + 3);
		new = ft_strcpy(new, s1);
		new = ft_strcat(new, s2);
		return (new);
	}
	return (NULL);
}
