/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_opp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 16:45:17 by upopee            #+#    #+#             */
/*   Updated: 2017/04/18 23:51:19 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

/*
**	->	Opposite t_quater value : q = -q
*/

t_quater	ft_quat_opp(t_quater *q)
{
	t_quater	dst;

	dst.w = q->w;
	dst.x = -(q->x);
	dst.y = -(q->y);
	dst.z = -(q->z);
	return (dst);
}