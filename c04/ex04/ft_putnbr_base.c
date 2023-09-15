/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:26:24 by yboumlak          #+#    #+#             */
/*   Updated: 2023/09/02 23:13:50 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_character(char a)
{
	write(1, &a, 1);
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
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr(int nb, int base_value, char *symbols)
{
	long	n_long;

	n_long = nb;
	if (n_long < 0)
	{
		print_character('-');
		n_long = -n_long;
	}
	if (n_long >= 10)
	{
		ft_putnbr(n_long / base_value, base_value, symbols);
	}
	print_character((symbols[n_long % base_value]));
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return ;
		++base_value;
	}
	if (base_value < 2)
		return ;
	if (double_char(base))
		return ;
	ft_putnbr(nbr, base_value, base);
}
/*
int main()
{
	int n = 85341;
	char *str = "0123456789abcdef";

	ft_putnbr_base(n, str);
}*/
