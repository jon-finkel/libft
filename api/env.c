/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 22:58:26 by nfinkel           #+#    #+#             */
/*   Updated: 2018/02/25 22:07:21 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../str/str.h"

char			*ft_getenv(const char *name)
{
	char			*buff;
	extern char		**environ;
	int				k;
	size_t			len;

	buff = NULL;
	len = ft_strlen(name);
	k = -1;
	while (environ[++k])
		if (ft_strnequ((char *)(environ[k]), name, len)
			&& environ[k][len] == '=')
			GIMME(ft_strchr(environ[k], '=') + 1);
	ZOMG;
}