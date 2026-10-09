/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: msotnych <msotnych@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/08 16:49:06 by msotnych      #+#    #+#                 */
/*   Updated: 2026/10/08 18:11:28 by msotnych      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int counter(char const *s, char c)
{
	int a;
	unsigned int fl;
	unsigned int c;
	
	c = 0;
	a = 0;
	fl = 0;
	while (s[a])
	{
		if(s[a] != c && fl == 0)
		{
			fl = 1;
			c++;
		}
		else if (s[a] == c)
		{
			fl = 0;
			a++;
		}
		return (c);
	}
}

char **ft_split(char const *s, char c)
{
	
	if (!s)
		return(NULL);

}