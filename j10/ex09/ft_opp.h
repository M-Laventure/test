/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 12:29:28 by malavent          #+#    #+#             */
/*   Updated: 2018/09/16 11:14:21 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP_H
# define FT_OPP_H
# include "op.h"
#include "struct.h"
t_op			g_opptab[] =
{
	{'+', &ft_add},
	{'-', &ft_sub},
	{'/', &ft_div},
	{'%', &ft_mod},
	{'*', &ft_mul},
	{"", &ft_usage}
};

#endif
