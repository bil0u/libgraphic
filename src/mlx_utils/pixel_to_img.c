/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_to_img.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 23:08:10 by upopee            #+#    #+#             */
/*   Updated: 2017/05/19 23:09:08 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

void		pixel_to_img(t_mlximg *img, int x, int y, unsigned int color)
{
	char			*curr_pixel;
	int				i;
	int				j;

	i = img->bpp / 8;
	curr_pixel = img->data + (x * i) + (y * img->sz_line);
	if (img->endian == 0)
	{
		while (i--)
			curr_pixel[i] = (color >> (i * 8)) & 0xFF;
	}
	else
	{
		j = 0;
		while (i--)
		{
			curr_pixel[i] = (color >> (j * 8)) & 0xFF;
			j++;
		}
	}
}