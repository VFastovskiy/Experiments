/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myputstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:35:36 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/17 15:35:39 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_myputstr(char *s)
{
    while(*s)
        ft_putchar(*s++);
}

int     main()
{
    char arr[] = "How are you my friend?)";
    ft_myputstr(arr);
    return (0);
}
