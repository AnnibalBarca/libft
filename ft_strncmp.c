/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandremeekel-konjikovic <alexandreme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:44:14 by alexandreme       #+#    #+#             */
/*   Updated: 2024/06/03 15:34:47 by alexandreme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)

{
    size_t i;

    i = 0;
    while (s1[i] && s1[i] == s2[i] && i < n)
            i++;
    if (i < n)
        return ((unsigned char) s1[i] - (unsigned char) s2[i]);
    return (0);
}