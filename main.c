/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 10:27:05 by trahman           #+#    #+#             */
/*   Updated: 2020/10/08 16:56:46 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** List of Useful Links for this project:
** https://gontjarow.github.io/MiniLibX/mlx-tutorial-create-image.html
*/

#include <unistd.h>
#include "mlx.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	deal_key(int key, void *param)
{
	ft_putchar('X');
	return (0);
}

int	main()
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*image_ptr;
	int		pixel_bits;
	int		line_bytes;
	int		endian;
	int		color;
	char	*buffer;
	int		x;
	int		y; 
	int		pixel;
	
	x = 0;
	y = 0;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "FDF_TEST WINDOW");
	image_ptr = mlx_new_image(mlx_ptr, 640, 360);
	buffer = mlx_get_data_addr(image_ptr, &pixel_bits, &line_bytes, &endian);
	color = 0xABCDEF;
	
	mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0x00FF0000);
	if (pixel_bits != 32)
		color = mlx_get_color_value(mlx_ptr, color);
	for (y = 0; y < 360; ++y)
	for (x = 0; x < 640; ++x)
	{
		pixel = (y * line_bytes) + (x * 4);

		if (endian == 1)		//Most significant (Alpha) byte first
		{
			buffer[pixel + 0] = (color >> 24);
			buffer[pixel + 1] = (color >> 16) & 0xFF;
			buffer[pixel + 2] = (color >> 8) & 0xFF;
			buffer[pixel + 3] = (color) & 0xFF;
		}
		else if (endian == 0)	//Least significant (Blue) byte first
		{
			buffer[pixel + 0] = (color) & 0xFF;
			buffer[pixel + 1] = (color >> 8) & 0xFF;
			buffer[pixel + 2] = (color >> 16) & 0xFF;
			buffer[pixel + 3] = (color >> 24);
		}
	}
	mlx_put_image_to_window(mlx_ptr, win_ptr, image_ptr, 0, 0);
	mlx_key_hook (win_ptr, deal_key, (void *)0);
	mlx_loop(mlx_ptr);
}

/*
From video: 0xFFFFFF
*/
