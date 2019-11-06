/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elseifelse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:23:16 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/14 17:23:19 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_solomon(int a)
{
    if (a < 0)
        ft_putstr("This nomber is negative");
    else if (a == 0)
        ft_putstr("Number is zero");
    else
        ft_putstr("Number is positive");
    return (0); // сообщаем компилятору, что функция завершила свою работу 
}

int     main()
{
    int i;
    
    i = - 1000;
    ft_solomon(i);
    return (0); 
}