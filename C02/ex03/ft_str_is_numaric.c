/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numaric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:55:39 by buryilma          #+#    #+#             */
/*   Updated: 2022/10/22 17:14:36 by buryilma         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	char str[]= "09842357382";
	printf("%d", ft_str_is_numeric(str));
}
*/
