/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihashimo <maaacha.kuri05@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:50:48 by ihashimo          #+#    #+#             */
/*   Updated: 2022/12/19 20:04:04 by ihashimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}
/*
int main(void)
{
	printf("%d\n",ft_toupper(1));
	printf("%d\n",ft_toupper('A'));
	printf("%d\n",ft_toupper('z'));
	printf("%d\n",ft_toupper(128));
	return 0;
}
*/