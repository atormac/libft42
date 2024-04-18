/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorma <atorma@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:59:39 by atorma            #+#    #+#             */
/*   Updated: 2024/04/18 17:33:17 by atorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	**ft_array_init(char const *s, char c)
{
	char	**arr;
	size_t	word_count;

	word_count = ft_count_words(s, c);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	arr[0] = NULL;
	return (arr);
}

static void	do_split(char **arr, char const *s, char c)
{
	const char	*word_start;
	int			i;

	i = 0;
	while (*s)
	{
		word_start = NULL;
		while (*s && *s == c)
			s++;
		if (*s)
			word_start = s;
		while (*s && *s != c)
			s++;
		if (!word_start)
			break ;
		arr[i] = malloc((s - word_start) + 1);
		if (!arr[i])
			return ;
		ft_strlcpy(arr[i], word_start, (s - word_start) + 1);
		i++;
	}
	arr[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char		**arr;

	arr = ft_array_init(s, c);
	if (!arr)
		return (arr);
	do_split(arr, s, c);
	return (arr);
}
