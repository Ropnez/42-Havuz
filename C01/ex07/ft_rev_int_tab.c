/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 04:00:21 by buryilma          #+#    #+#             */
/*   Updated: 2022/10/18 20:50:48 by buryilma         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab [i] = tab [size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*int    main()
{
	int	tab[6] = {0, 1, 2, 3, 4, 5};
    int size = 6;

    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
    return (0);
}
*/
