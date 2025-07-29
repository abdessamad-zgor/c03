/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:32:30 by azgor             #+#    #+#             */
/*   Updated: 2025/07/29 17:44:13 by azgor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lendest;

	i = -1;
	lendest = 0;
	while (dest[i])
		i++;
	while (src[++i])
		dest[lendest + i] = src[i]; 
	dest[lendest + i] = 0;
	return (dest);
}
