/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_postmul_quat.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 04:43:54 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:15:10 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../quaternions/includes/quaternions.h"
#include "../includes/matrix.h"

t_quater	ft_mat4_postmul_quat(t_quater q, t_matrix4 m)
{
	t_quater	dst;

	dst.x = q.x * m.array[0][0] + q.y * m.array[0][1]
			+ q.z * m.array[0][2] + q.w * m.array[0][3];
	dst.y = q.x * m.array[1][0] + q.y * m.array[1][1]
			+ q.z * m.array[1][2] + q.w * m.array[1][3];
	dst.z = q.x * m.array[2][0] + q.y * m.array[2][1]
			+ q.z * m.array[2][2] + q.w * m.array[2][3];
	dst.w = q.x * m.array[3][0] + q.y * m.array[3][1]
			+ q.z * m.array[3][2] + q.w * m.array[3][3];
	return (dst);
}
