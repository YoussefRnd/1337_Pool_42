/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:48:57 by yboumlak          #+#    #+#             */
/*   Updated: 2023/09/02 23:06:49 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	return (str);
}

int	double_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (symbols[i])
	{
		j = i + 1;
		while (symbols[j])
		{
			if (symbols[i] == symbols[j])
				return 1;
			j++;
		}
		i++;
	}
	return 0;
}

int ft_atoi_base(char *str, char *base)
{
	while (base[baseValue])
	{
		if (base[baseValue] == '+' || base[baseValue] == '-' || base[baseValue] == ' ')
		{
			return (0);
		}
		baseValue++;
	}
	if (baseValue < 2)
	{
		return (0);
	}
	if (double_char(base))
	{
		return (0);
	}
}
