/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_ansi_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 21:34:16 by nfinkel           #+#    #+#             */
/*   Updated: 2019/03/11 21:46:08 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_private.h"

static const struct s_color		g_color[] =
{
	{'x', 0},
	{'1', 1},
	{'4', 4},
	{'5', 5},
	{'7', 7},
	{'8', 8},
	{'a', 30},
	{'b', 31},
	{'c', 32},
	{'d', 33},
	{'e', 34},
	{'f', 35},
	{'g', 36},
	{'h', 37},
	{'A', 90},
	{'B', 91},
	{'C', 92},
	{'D', 93},
	{'E', 94},
	{'F', 95},
	{'G', 96},
	{'H', 97},
};

static int			check_end_of_color_flag(t_printf *data, const char *format)
{
	char		buff[PRINTF_BUFFSIZE];
	char		*eoc_start;

	if (ft_strnequ(format, "{eoc}", 5) && ft_strlen(data->ansi_colors))
	{
		pf_fill_buffer(data, 0, "\033[0m", E_NON_PRINT);
		return (5);
	}
	++format;
	if ((eoc_start = ft_strstr(format, "{eoc}")))
	{
		ft_memnccpy(buff, format, *eoc_start, PRINTF_BUFFSIZE);
		if (ft_strchr(buff, '}'))
		{
			ft_memset(data->ansi_colors, '\0', ANSI_STRING_BUFFSIZE);
			ft_strcat(data->ansi_colors, "\033[");
			data->color_multiple_flags = false;
			return (0);
		}
	}
	pf_fill_buffer(data, '{', NULL, E_PRINT);
	return (1);
}

static void			cat_string(t_printf *data, size_t n, int k)
{
	char		*str;

	if (data->color_multiple_flags == true)
		ft_strcat(data->ansi_colors, ";");
	str = ft_itoa(g_color[k].code + n);
	ft_strcat(data->ansi_colors, str);
	ft_strdtor(&str);
	data->color_multiple_flags = true;
}

const char			*pf_ansi_color(t_printf *data, const char *format,
					t_flag flag)
{
	int			k;
	size_t		n;

	if ((n = check_end_of_color_flag(data, format)))
		return (format + n);
	while (++format && *format != '}' && n <= 10)
	{
		k = 0;
		while (*format != 'x' && ++k < LAST_COLOR_FLAG)
			if (*format == g_color[k].letter)
			{
				cat_string(data, n, k);
				break ;
			}
		if (!k || (k > 5 && k < LAST_COLOR_FLAG))
			n += 10;
	}
	ft_strcat(data->ansi_colors, "m");
	if (flag == E_WIDE)
		pf_fill_buffer(data, 0, data->ansi_colors, E_NON_PRINT);
	else
		SET_FLAG(E_ANSI_COLOR, data->flags);
	return (ft_strchr(format, '}') + 1);
}
