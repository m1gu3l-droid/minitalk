/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:08:44 by fnovais-          #+#    #+#             */
/*   Updated: 2022/11/14 15:54:51 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_arr(const char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static char	*make_str(const char *s, int start, int finish)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((finish - start + 1) * sizeof(char));
	if (!str)
		return (0);
	while (start < finish)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**s_split;

	s_split = malloc((num_arr(s, c) + 1) * sizeof(char *));
	if (!s_split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			s_split[j++] = make_str(s, index, i);
			index = -1;
		}
		i++;
	}
	s_split[j] = 0;
	return (s_split);
}
/*
int main(int argc, char **argv)
{
    char **words;
    
    words = ft_split(argv[1], argv[2][0]);
    int i = 0;
    for(; words[i]; i++)
        printf("words[%d] = \'%s\'\n", i, words[i]);
    printf("words[%d] = NULL\n", i);
//    ft_delete_matrix(words);
}
*/
