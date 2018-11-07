/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstr_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 01:13:40 by pfragnou          #+#    #+#             */
/*   Updated: 2018/05/17 01:13:44 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	ft_tstr_del(t_string **str)
{
	if (str && *str)
	{
		if ((*str)->content)
			ft_strdel(&((*str)->content));
		free(*str);
		*str = NULL;
	}
}
