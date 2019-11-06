/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizeof.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:19:00 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/09 15:19:06 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main()
{
    double  first;
    int     second;
    char    third;
    size_t  s;
    ft_putnbr(sizeof(first));
    ft_putchar('\n');
    ft_putnbr(sizeof(second));
    ft_putchar('\n');
    ft_putnbr(sizeof(third));
    ft_putchar('\n');
    ft_putnbr(sizeof(s));
    ft_putchar('\n');
    return (0);
}
