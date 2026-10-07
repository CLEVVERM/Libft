/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: msotnych <msotnych@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/07 14:06:50 by msotnych      #+#    #+#                 */
/*   Updated: 2026/10/07 15:34:37 by msotnych      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	size_t l;
	size_t a;

	l = ft_strlen(s);
	res = malloc(l + 1);
	if (!s)
	{
		return (NULL);
	}
	
}