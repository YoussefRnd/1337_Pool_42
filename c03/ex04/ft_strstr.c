/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:07:50 by yboumlak          #+#    #+#             */
/*   Updated: 2023/08/22 19:28:01 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p1;
	char	*p2;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		p1 = str;
		p2 = to_find;
		while (*p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
//int main()
//{
//	char *s1 = "hello mother fuckers";
//	char *s2 = " ";
//	printf("%s", ft_strstr(s1, s2));
//}
