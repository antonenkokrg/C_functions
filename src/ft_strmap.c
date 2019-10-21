/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:19:02 by ilya              #+#    #+#             */
/*   Updated: 2019/10/08 12:23:26 by ilya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	str = ft_strdup((char *)s);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		str[i] = f(str[i]);
		i++;
	}
	return (str);
}
