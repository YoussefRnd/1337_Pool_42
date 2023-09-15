/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:51:34 by yboumlak          #+#    #+#             */
/*   Updated: 2023/09/02 21:31:44 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

void	ft_putnbr(int nb)
{
	long	n_long;

	n_long = nb;
	if (n_long < 0)
	{
		ft_putchar('-');
		n_long = -n_long;
	}
	if (n_long >= 10)
	{
		ft_putnbr(n_long / 10);
	}
	ft_putchar(n_long % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
/*
int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
        return 1;
    }

    struct s_stock_str *result = ft_strs_to_tab(argc - 1, &argv[1]);

    if (result == NULL) {
        printf("Memory allocation error.\n");
        return 1;
    }

    ft_show_tab(result);

    free(result);

    return 0;
}*/
