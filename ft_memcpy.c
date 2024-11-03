/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandremeekel-konjikovic <alexandreme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 02:21:47 by alexandreme       #+#    #+#             */
/*   Updated: 2024/10/12 16:16:55 by alexandreme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;
    
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}