/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihashimo <maaacha.kuri05@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:49:29 by ihashimo          #+#    #+#             */
/*   Updated: 2022/11/03 12:53:39 by ihashimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		src[i] = (unsigned char)c;
		i++;
	}
	return (src);
}
/*
int main(void)
{
	char buf[] = "ABCDEFGHIJK";
	memset(buf+2,'1',3);
	printf("buf文字列→%s\n",buf);

	char buf1[] = "ABCDEFGHIJK";
	memset(buf1+2,'1',3);
	printf("buf文字列→%s\n",buf1);

	return 0;
}
*/