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

// fonctions principales
void	ft_treat_l(int *tab, char **files);
void	ft_treat_wtl(int *tab, char **files);
void	ft_check_valids(char **files);
int		*ft_ls_options(char **tab, int len);
char	**ft_lsl_infos(char *file);
char	**ft_files_read(int len, char **files);

// fonctions secondaires

char	**ft_troncate_a(char **files, int len);
char	**ft_order(char **tab, int len);
char	**ft_order_time(char **list, int len);
char	**ft_order_invtime(char **list, int len);
char	**ft_ccswaporder(char **tab, int len);
char	**ft_lsl_infos(char *file);
char	**ft_symblnk(char *file);
char	**ft_troncate_a(char **files, int len);
char	**ft_realloc_cctab(char **tab, int len);
char	**ft_strsplit(char *s, char c);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strdup(char *s1);
char	*ft_itoa(int n);
char	*ft_gettime(struct stat buf);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_isupper(char c);
int		ft_islower(char c);
int		ft_isalpha(char c);
int		ft_lowups(char *s1, char *s2);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_bzero(void *s, size_t n);

#endif
