/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:17:41 by almeekel          #+#    #+#             */
/*   Updated: 2024/11/07 15:23:17 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstck, const char *ndl, size_t len)
{
	size_t i;
	size_t j;

	if (*ndl == '\0')
		return ((char *)hstck);
	i = 0;
	while (hstck[i] != '\0' && i < len)
	{
		j = 0;
		while (ndl[j] != '\0' && hstck[i + j] == ndl[j] && (i + j) < len)
		{
			j++;
		}
		if (ndl[j] == '\0')
			return ((char *)(hstck + i));
		i++;
	}
	return (NULL);
}