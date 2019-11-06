/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrayinicialization.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:35:53 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/15 19:35:56 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main()
{
    int array[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; /* Строка кончается нулевым символом, 
    поэтому при объявлении необходимо задавать размер массива, достаточный для того, 
    чтобы этот символ поместился в нем. */
    int i;

    i = 0;
    while (array[i])
    {
        ft_putnbr(array[i]);
        i++;
    }
    return (0);
}