/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:48:51 by yboumlak          #+#    #+#             */
/*   Updated: 2023/09/02 14:38:13 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*values;
	int	n;
	int	i;

	n = max - min;
	if (n <= 0)
	{
		return (NULL);
	}
	values = (int *) malloc(n * 4);
	i = 0;
	while (min < max)
	{
		values[i] = min;
		i++;
		min++;
	}
	return (values);
}
/*
int main()
{
	int *str;
	int i;

	i = 0;
	str = ft_range(7, 1);
	while (i < 9)
	{
		printf("%d\n", str[i]);
		i++;
	}
	return (0);
}*/
