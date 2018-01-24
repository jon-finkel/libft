/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 17:15:13 by nfinkel           #+#    #+#             */
/*   Updated: 2018/01/24 16:21:47 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string_functions/string_private.h"

void			ft_strclr(char *s)
{
	int			k;
	size_t		len;

	if (!s)
		BYEZ;
	k = -1;
	len = ft_strlen(s);
	while ((unsigned int)++k < len)
		*(s + k) = '\0';
}
