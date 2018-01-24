/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 10:24:48 by nfinkel           #+#    #+#             */
/*   Updated: 2018/01/24 15:23:30 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./io_private.h"

void			ft_putendl(const char *s)
{
	ft_putendl_fd(s, STDOUT_FILENO);
}
