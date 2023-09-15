/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:59:48 by yboumlak          #+#    #+#             */
/*   Updated: 2023/09/06 14:56:38 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset) == 0)
			i++;
		word++;
		while (str[i] && is_sep(str[i], charset) == 1)
			i++;
	}
	return (word);
}

void	copy_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (is_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	split(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) == 0)
		{
			j = 0;
			while (is_sep(str[i + j], charset) == 0)
				j++;
			array[word] = (char *) malloc(sizeof(char) * (j + i));
			copy_word(array[word], str + i, charset);
			i += j;
			word++;
		}
		else
		{
			i++;
		}
	}
	array[word] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		words_num;

	words_num = word_count(str, charset);
	array = (char **) malloc(sizeof(char *) * (words_num + 1));
	split(array, str, charset);
	return (array);
}
/*
int main()
{
    char *khtek = " $budna$w9&bz aaf&$ga3&fdn s&fsd& $jfd l    $$";
    char *mok = " &$";
    char **result = ft_split(khtek, mok);
    int i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return 0;
}*/
