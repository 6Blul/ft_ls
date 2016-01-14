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
# include <sys/types.h>
# include <sys/stat.h>
# include <pwd.h>
# include <dirent.h>
# include <unistd.h>
# include <grp.h>
# include <time.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>

char	*ft_strdup(char *s1);
char	**ft_realloc_tab(char **tab, int len);
int		ft_strcmp(char *s1, char *s2);
char	**ft_order(char **tab, int len);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_ls_simple();
void	ft_print_simple(char **tab, int len);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strlen(char *s);
int		ft_lowups(char *s1, char *s2);
char	**ft_order(char **tab, int len);
int		ft_isupper(char c);
int		ft_islower(char c);
int		ft_isalpha(char c);

#endif
