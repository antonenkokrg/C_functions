/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:28:21 by ilya              #+#    #+#             */
/*   Updated: 2019/10/10 21:28:32 by ilya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *swap;
	t_list *t;

	swap = *alst;
	t = *alst;
	while (t != NULL)
	{
		(*del)(swap->content, swap->content_size);
		swap = t->next;
		free(t);
		t = swap;
	}
	*alst = NULL;
}
