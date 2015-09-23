/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 15:40:23 by spochez           #+#    #+#             */
/*   Updated: 2015/09/23 17:30:30 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

char	*ft_strdup(char *s1);
char	**ft_realloc_tab(char **tab, int len);
int		ft_strcmp(char *s1, char *s2);
char	**ft_order(char **tab, int len);

#endif
