/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharlet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:06:53 by kcharlet          #+#    #+#             */
/*   Updated: 2019/10/07 17:35:06 by kcharlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_is_in(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ("YYEE BOY");
		i++;
	}
	return ("NOT TODAY NIGGA");
}

int 	main()
{
	char string[20] = "You gad dem right";
	char c;

	c = 'n';
	ft_is_in(string, c);
	ft_putstr(ft_is_in(string, c));
	return (0);	
}
