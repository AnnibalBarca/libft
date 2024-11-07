/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:42:12 by alexandreme       #+#    #+#             */
/*   Updated: 2024/11/07 17:08:01 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_toupper(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_isdigit(int c);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlcat(char *d, const char *s, size_t dstsize);
int		ft_isdigit(int c);
void	*memmove(void *dst, const void *src, size_t len);

#endif