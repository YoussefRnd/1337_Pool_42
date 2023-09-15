/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:07:40 by yboumlak          #+#    #+#             */
/*   Updated: 2023/08/27 15:09:50 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size < 1)
	{
		return (count);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

/*int main()
{
	char *src = "YOusfs";
	char dest[10];
	ft_strlcpy(dest, src, 2);
	printf("%s", dest);
	char *src1 = "fhsd";
	char dest2[10];
	strlcpy(dest2, src1, 2);
	printf("%s", dest2);

}*/
