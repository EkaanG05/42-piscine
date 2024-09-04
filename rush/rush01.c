/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguner <eguner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:48:46 by eguner            #+#    #+#             */
/*   Updated: 2024/08/17 15:48:46 by eguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int i, int u, int x, int y)
{
	if (i == 0 && u == 0)
		ft_putchar('/');
	else if (i == 0 && u == x -1)
		ft_putchar('\\');
	else if (i == y -1 && u == 0)
		ft_putchar('\\');
	else if (i == y -1 && u == x -1)
		ft_putchar('/');
	else if (i == 0 || i == y -1)
		ft_putchar('*');
	else if (u == 0 || u == x -1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	u;

	i = 0;
	while (i < y)
	{
		u = 0;
		while (u < x)
		{
			print(i, u, x, y);
			u++;
		}
		ft_putchar('\n');
		i++;
	}
}
