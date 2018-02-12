/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 18:41:21 by nfinkel           #+#    #+#             */
/*   Updated: 2018/02/12 20:28:42 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/dependencies.h"

int			ft_strnequ(const char *restrict s1, const char *restrict s2,
			size_t n)
{
	while (n && --n && *s1 && *(unsigned char *)s1 == *(unsigned char *)s2)
	{
		++s1;
		++s2;
	}
	GIMME(!n || *s1 == *s2 ? 1 : 0);
}
