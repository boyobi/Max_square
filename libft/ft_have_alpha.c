/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_have_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbetz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 22:12:32 by bbetz             #+#    #+#             */
/*   Updated: 2016/02/26 22:13:59 by bbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_have_alpha(char *s)
{
	while (s && *s)
	{
		if (ft_isalpha(*s) == 1)
			return (1);
		s++;
	}
	return (0);
}
