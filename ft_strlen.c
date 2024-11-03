/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandremeekel-konjikovic <alexandreme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 01:25:53 by alexandreme       #+#    #+#             */
/*   Updated: 2024/10/11 13:03:27 by alexandreme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen (const char *s)
{
    int i;
    i = 0;
    
    while (s[i] != '\0')
        i++;
    return (i);
}
