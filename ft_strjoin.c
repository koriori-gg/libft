/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihashimo <maaacha.kuri05@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:50:07 by ihashimo          #+#    #+#             */
/*   Updated: 2022/11/01 22:30:27 by ihashimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ret;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ret = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ret[i + j] = s2[j];
		j++;
	}
	ret[i + j] = '\0';
	return (ret);
}
/*
int main(void)
{
	printf("%s\n",ft_strjoin("ss","\0"));
	printf("%s\n",ft_strjoin("\0","\0"));
	printf("%s\n",ft_strjoin("\0","ss"));
}
*/
/*
int	main(void)
{
	char s1[] = "konnitiha";
	char s2[] = "-konbanwa";
	printf("%s",ft_strjoin(s1, s2)s);
	return (0);
}
*/