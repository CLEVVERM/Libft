/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: msotnych <msotnych@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/09 19:01:02 by msotnych      #+#    #+#                 */
/*   Updated: 2026/10/09 19:10:59 by msotnych      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

// int main(void)
// {
// 	char c = "wve w";
// 	int fd = 2;
// 	ft_putstr_fd(c, fd);
// }