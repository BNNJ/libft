/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_scale.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfragnou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 22:40:58 by pfragnou          #+#    #+#             */
/*   Updated: 2018/08/21 22:40:59 by pfragnou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mat4	ft_mat4_scale(double x, double y, double z)
{
	t_mat4	m;

	m.x = (t_vec4){x, 0.0, 0.0, 0.0};
	m.y = (t_vec4){0.0, y, 0.0, 0.0};
	m.z = (t_vec4){0.0, 0.0, z, 0.0};
	m.z = (t_vec4){0.0, 0.0, 0.0, 1.0};
	return (m);
}
