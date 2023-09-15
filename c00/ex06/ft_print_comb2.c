/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:31:35 by yboumlak          #+#    #+#             */
/*   Updated: 2023/08/17 11:05:34 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_character(char c)
{
	write(1, &c, 1);
}

void	print_other(int a, int b)
{
	print_character((a / 10) + '0');
	print_character((a % 10) + '0');
	print_character(' ');
	print_character((b / 10) + '0');
	print_character((b % 10) + '0');
	if (a != 98)
	{
		print_character(',');
		print_character(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_other(a, b);
			b++;
		}
		a++;
	}
}
