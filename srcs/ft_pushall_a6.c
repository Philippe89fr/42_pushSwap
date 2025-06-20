/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushall_a6.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:23:16 by prambaud          #+#    #+#             */
/*   Updated: 2024/12/03 17:18:24 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "pushswap.h"

int	ft_pushalla0_34(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.17)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.34)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.34)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}

int	ft_pushalla0_68(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.51)
	{
		ft_pusha(lst, lst1);
		if ((*lst)->decile > 0.68)
			ft_rotatea_b(lst, lst1);
		else
			ft_rotateb(lst1);
		res = res + 2;
	}
	else if ((*lst)->decile <= 0.68)
		res = res + ft_pusha(lst, lst1);
	else
		res = res + ft_rotatea(lst);
	return (res);
}

int	ft_pushalla1(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	if ((*lst)->decile <= 0.85)
	{
		ft_pusha(lst, lst1);
		ft_rotateb(lst1);
		res = res + 2;
	}
	else
		res = res + ft_pusha(lst, lst1);
	return (res);
}

int	ft_pushalla6(t_list **lst, t_list **lst1)
{
	int	res;

	res = 0;
	while (!ft_checkdecile(*lst, 0.34))
		res = res + ft_pushalla0_34(lst, lst1);
	while (!ft_checkdecile(*lst, 0.68))
		res = res + ft_pushalla0_68(lst, lst1);
	while (*lst)
		res = res + ft_pushalla1(lst, lst1);
	return (res);
}
