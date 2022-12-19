/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihashimo <maaacha.kuri05@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:48:54 by ihashimo          #+#    #+#             */
/*   Updated: 2022/12/19 20:04:04 by ihashimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isalpha(int d)
{
	return (('a' <= d && d <= 'z') || ('A' <= d && d <= 'Z'));
}
/*
int main(void)
{
    printf("%d\n",ft_isalpha('9'));
	printf("%d\n",ft_isalpha('A'));
	printf("%d\n",ft_isalpha('z'));
	printf("%d\n",ft_isalpha(128));
	return 0;
}
*/