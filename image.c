#include "./mlx/mlx.h"

int	main(void)
{
	void	*mlx;
    void    *mlx_win;
	void	*img;
	char	*relative_path = "./character.xpm";
	int		img_width;
	int		img_height;

    mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1000, 1000, "Hello world!");
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
    mlx_put_image_to_window(mlx, mlx_win, img, 0, 0);
    mlx_loop(mlx);
}