/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeekel <almeekel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:06:37 by alexandreme       #+#    #+#             */
/*   Updated: 2024/11/06 11:02:53 by almeekel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c += 32);
	}
	return (c);
}