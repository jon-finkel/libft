/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 20:38:21 by nfinkel           #+#    #+#             */
/*   Updated: 2018/01/24 18:33:58 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./character.h"

inline int			ft_isupper(int c)
{
	GIMME(c > 64 && c < 91);
}
