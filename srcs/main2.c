/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prambaud <prambaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:44:02 by vincent           #+#    #+#             */
/*   Updated: 2024/12/10 15:42:50 by prambaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int ac, char **av)
{
	int		res;
	t_list	*lst11;
	t_list	*lstb11;

	res = 0;
	lst11 = ft_lst_setup_a3(ac, av);
	lstb11 = NULL;
	ft_indexing(&lst11);
	ft_algo(&lst11, &lstb11);
	ft_lstclear(&lst11);
	ft_lstclear(&lstb11);
	return (0);
}
