/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_vec2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 01:31:21 by upopee            #+#    #+#             */
/*   Updated: 2017/04/20 01:31:36 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vector2	ft_to_vec2(float x, float y)
{
	t_vector2	dst;

	dst.x = x;
	dst.y = y;
	return (dst);
}
