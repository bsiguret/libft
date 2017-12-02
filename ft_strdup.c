/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:46:49 by bsiguret          #+#    #+#             */
/*   Updated: 2017/11/08 03:49:56 by bsiguret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s1[len])
		++len;
	if ((dest = (char*)malloc(sizeof(const char) * (len + 1))) == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = s1[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
