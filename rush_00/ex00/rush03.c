/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:45:25 by buryilma          #+#    #+#             */
/*   Updated: 2022/10/16 22:06:28 by buryilma         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	satir;
	int	sutn;

	sutn = 1;
	while (sutn <= y && x > 0)
	{
		satir = 1;
		while (satir <= x)
		{
			if ((satir == 1 && sutn == 1) || (satir == 1 && sutn == y))
				ft_putchar('A');
			else if ((satir == x && sutn == 1) || (satir == x && sutn == y))
				ft_putchar('C');
			else if ((satir == 1) || (satir == x) || (sutn == 1) || (sutn == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			satir++;
		}
		ft_putchar('\n');
		sutn++;
	}
}
