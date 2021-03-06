/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_neg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:56:00 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:19:52 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/quaternions.h"

t_quater	ft_quat_neg(t_quater q)
{
	t_quater	dst;

	dst.w = -(q.w);
	dst.x = -(q.x);
	dst.y = -(q.y);
	dst.z = -(q.z);
	return (dst);
}
