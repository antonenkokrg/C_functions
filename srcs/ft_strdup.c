/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilantone <ilantone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:04:44 by ilantone          #+#    #+#             */
/*   Updated: 2019/09/18 12:53:14 by ilantone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dupres;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dupres = (char*)malloc(sizeof(*dupres) * (len + 1));
	if (dupres == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dupres[i] = src[i];
		i++;
	}
	dupres[i] = '\0';
	return (dupres);
}
