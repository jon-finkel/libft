/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 21:43:36 by nfinkel           #+#    #+#             */
/*   Updated: 2018/02/20 09:22:19 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./linkedlist.h"

void			ft_lstdelone(t_list **alst, t_ldtor ldtor, va_list ap)
{
	ldtor((*alst)->data, (*alst)->data_size, ap);
	free(*alst);
	*alst = NULL;
}
