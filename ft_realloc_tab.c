/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 15:31:01 by spochez           #+#    #+#             */
/*   Updated: 2015/09/20 15:39:17 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = NULL;
	s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}													
		s2[i] = 0;
	return (s2);
}

char	**ft_realloc_tab(char **tab, int len)
{
	char	**res;
	int		i;

	res = (char **)malloc(sizeof(char *) * len + 1);
	i = 0;
	while (i <= len)
	{
		res[i] = ft_strdup(tab[i]);
		i++;
	}
	return (tab)
}
