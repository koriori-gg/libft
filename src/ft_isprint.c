/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihashimo <maaacha.kuri05@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:49:07 by ihashimo          #+#    #+#             */
/*   Updated: 2022/12/19 20:04:04 by ihashimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isprint(int d)
{
	return (' ' <= d && d <= '~');
}
/*
int main(void)
{
    printf("%d\n",ft_isprint(1));
	printf("%d\n",ft_isprint('A'));
	printf("%d\n",ft_isprint('z'));
	printf("%d\n",ft_isprint(128));
	return 0;
}
*/