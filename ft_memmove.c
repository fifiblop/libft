/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelefos <pdelefos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:41:13 by pdelefos          #+#    #+#             */
/*   Updated: 2015/12/05 10:33:26 by pdelefos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	tab[len];

	i = 0;
	while (i < len)
	{
		tab[i] = ((unsigned char*)(src))[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char*)(dst))[i] = tab[i];
		i++;
	}
	return (dst);
}
