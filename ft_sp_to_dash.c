/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sp_to_dash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:11:54 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/23 14:03:28 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_sp_to_dash(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
            ft_putchar('-');
        else
            ft_putchar(s[i]);
        i++;
    }
}

int     main()
{
    char s[20] = "Hey you gays";
    ft_sp_to_dash(s);
    ft_putchar('\n');
    return (0);
}
