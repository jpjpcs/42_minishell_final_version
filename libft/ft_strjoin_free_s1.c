/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_s1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:35:09 by crocha-s          #+#    #+#             */
/*   Updated: 2024/06/12 15:51:04 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free_s1(char *s1, char const *s2)
{
	char	*c;
	size_t	len;
	int		i;
	int		j;

	len = ft_strlen(s1) + ft_strlen(s2);
	c = (char *)malloc(len * sizeof(char) + 1);
	if (!c)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		c[i + j] = s2[j];
		j++;
	}
	c[i + j] = '\0';
	if (s1)
		free(s1);
	return (c);
}
