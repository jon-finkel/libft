/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 20:18:05 by nfinkel           #+#    #+#             */
/*   Updated: 2017/12/01 12:06:42 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
