/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgor <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 01:15:38 by azgor             #+#    #+#             */
/*   Updated: 2025/07/31 01:40:04 by azgor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int j;
	int	lendest;
	int lensrc;

	i = 0;
	j = 0;
	lensrc = 0;
	lendest = 0;
	while (dest[lendest])
		lendest++;
	while (src[lensrc])
		lensrc++;
	while ()
}
