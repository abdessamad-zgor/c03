/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:55:16 by azgor             #+#    #+#             */
/*   Updated: 2025/07/31 00:58:56 by azgor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	lenhay;

	i = 0;
	lenhay = 0;
	if (!to_find)
		return (str);
	while (to_find[lenhay])
		lenhay++;
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j] && j < lenhay)
		{
			i++;
			j++;
		}
		if (lenhay == j)
			return (&str[i - j]);
		i++;
	}
	return (NULL);
}
