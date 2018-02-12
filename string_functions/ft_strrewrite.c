/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrewrite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:34:57 by nfinkel           #+#    #+#             */
/*   Updated: 2018/02/12 20:29:28 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./string.h"

/*
** Find the string little in the string big, and replace the little part with
** filler. If little isn't present in big, ft_strrewrite doesn't do anything.
** If filler is NULL, little will effectively be erased from big.
** ft_strrewrite does not check that the size of the big is sufficiently large
** to hold the rewritten string, it is up to the user to do so.
*/

int			ft_strrewrite(char *restrict big, const char *restrict little,
			const char *fill)
{
	char		*copy;
	int			k;
	size_t		big_len;
	size_t		lit_len;

	lit_len = ft_strlen(little);
	big_len = ft_strlen(big);
	little = ft_strstr(big, little);
	copy = ft_strdup(little + lit_len);
	big += big_len - ft_strlen(little);
	while (*fill)
		*big++ = *fill++;
	k = -1;
	while (copy[++k])
		*big++ = copy[k];
	*big = '\0';
	free(copy);
	KTHXBYE;
}
