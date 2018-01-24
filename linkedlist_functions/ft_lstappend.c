/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 15:31:06 by nfinkel           #+#    #+#             */
/*   Updated: 2018/01/24 15:02:12 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./linkedlist_private.h"

inline void			ft_lstappend(t_list **alst, t_list *newlink)
{
	if (!*alst)
	{
		*alst = newlink;
		BYEZ;
	}
	while ((*alst)->next)
		*alst = (*alst)->next;
	(*alst)->next = newlink;
}
