/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:51:13 by yboumlak          #+#    #+#             */
/*   Updated: 2023/09/02 14:34:24 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	if (src == NULL)
		return (NULL);
	dup = (char *) malloc (ft_strlen(src) + 1);
	if (dup != NULL)
	{
		ft_strcpy(dup, src);
	}
	return (dup);
}
/*
int main()
{
	char *test = "Youssef";
	char *duplicated = ft_strdup(test);
	printf("%s", duplicated);
}*/
