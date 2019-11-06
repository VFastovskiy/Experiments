/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   question_operator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:39:30 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/14 17:39:33 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_question_operator(int i)
{
    int y;

    y = i>=25 ? 26 : 35;
    return (y);
}

int     main()
{
    int i;

    i = 25;
    ft_putnbr(ft_question_operator(i));
    return (0);
}