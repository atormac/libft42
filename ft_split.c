/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorma <atorma@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:59:39 by atorma            #+#    #+#             */
/*   Updated: 2024/04/18 13:27:59 by atorma           ###   ########.fr       */
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
	if (word_count == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (word_count + 1));
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	const char	*word_start;
	int			i;

	i = 0;
	arr = ft_array_init(s, c);
	if (!arr)
		return (NULL);
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
			return (NULL);
		ft_strlcpy(arr[i], word_start, (s - word_start) + 1);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
