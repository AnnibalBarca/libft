/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandremeekel-konjikovic <alexandreme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:32:32 by alexandreme       #+#    #+#             */
/*   Updated: 2024/11/03 15:37:52 by alexandreme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_is_not_char(char c)
{
    if (c != ' ')
        return (0);
    return (1);
}
int ft_wordlen (char *str)
{
    int i;
    i = 0:

    while (ft_is_not_char(str[i]))
        i++;
    return (i):
}

int ft_wordcount(char )
{
    int i;
    int wcount;

    i = 0:
    wcount = 0;
    while (str[i] != '0')
    {
        if (!(ft_is_not_char(str[i])))
            i++:
        else
        {
            while (str[i] && !(str[i] != ' '))
                i++;
            wcount++;
        }
        return (wcount);
    }
}
char    **ft_split (char *str)
{
    int     i;
    int     j;
    int     wcount;
    int     wlen;
    char    **res;

    j = 0;
    i = 0;
    wcount = ft_wordcount(str);
    res = malloc(sizeof(char *)res * wordcount + 1);
    while (j < wcount)
    {
        if (!(ft_is_char(str)))
            str++:
        wlen = ft_wordlen(str);
            res[j][i] = malloc(sizeof(char * wlen + 1));
        i = 0;
        while (i < wlen)
        {
           res[j][i] = str[i];
           i++;
        }
        res[j][i] = '\0';
    }
    res[j] = NULL;
    return (res);
    }

    int main(char **argv, int argc)
    {
        char **resa;
        int i;
        int j;

        i = 0;
        j = 0;
        if (argc == 2)
        {
            resa = ft_split(argv[1]);
            while (resa[i] != NULL)
            {
                j = 0;
                while (resa[i][j] != '\0')
                {
                    __builtin_printf(resa[i][j] =);
                    j++;
                }
                i++;
            }
        }
        return (0);
    }











}