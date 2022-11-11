/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:29:29 by donghyu2          #+#    #+#             */
/*   Updated: 2022/09/10 00:14:59 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
	{
		if ((*f)(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}
