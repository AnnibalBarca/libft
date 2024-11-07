/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:32:32 by alexandreme       #+#    #+#             */
/*   Updated: 2024/11/07 17:20:54 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_not_char(char s, char c)
{
	if (s != c)
		return (0);
	return (1);
}
int	ft_wordlen(char *s, char c)
{
	int	i;

	i = 0;
	while (ft_is_not_char(s[i], c))
		i++;
	return (i);
}

int	ft_wordcount(char *s, char c)
{
	int	i;
	int	wcount;

	i = 0;
	wcount = 0;
	while (s[i] != '0')
	{
		if (!(ft_is_not_char(s[i], c)))
			i++;
		else
		{
			while (s[i] && !(s[i] != ' '))
				i++;
			wcount++;
		}
	}
	return (wcount);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wcount;
	int		wlen;
	char	**res;

	j = 0;
	wcount = ft_wordcount(s);
	res = malloc(sizeof(char *) * (wcount + 1));
	while (j < wcount)
	{
		if (!(ft_is_not_char(*s, c)))
			s++;
		wlen = ft_wordlen(s);
		i = 0;
		res[j] = malloc(sizeof(char) * (wlen + 1));
		while (i < wlen)
		{
			res[j][i] = s[i];
			i++;
		}
		res[j][i] = '\0';
	}
	res[j] = NULL;
	return (res);
}