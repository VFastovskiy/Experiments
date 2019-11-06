/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   question_operator_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:48:17 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/14 17:48:20 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_question_operator(int i)
{
    int j;

    j = 100;
    i >= j ? ft_putstr("i greater then j") : ft_putstr("i lower then j");
    return (0);
}

int     main()
{
    int k;

    k = 90;
    ft_question_operator(k);
    return (0);
}