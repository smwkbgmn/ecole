/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:22:35 by donghyu2          #+#    #+#             */
/*   Updated: 2022/11/23 23:52:57 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new == 0)
		return ;
	if (*lst == 0)
		*lst = new;
	else
	{
		while ((*lst)->next)
			lst = &(*lst)->next;
		(*lst)->next = new;
	}
}