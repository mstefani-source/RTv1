/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <mstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:03:41 by mstefani          #+#    #+#             */
/*   Updated: 2019/11/28 17:05:28 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RTv1.h"

int ft_checkarg(int argc, char **argv)
{
	char *s;

	if (argc < 2 || argc > 3)
	{
		write(1, "usage: RTv1 scene.rt [--save]\n", 30);
		return (0);
	}
	printf("%s\n", argv[1]);
		return(1);
}

int	main(int argc, char** argv)
{
	if (!ft_checkarg(argc, argv))
		return (0);
	write(1, "OK\n", 3);
    rgb_to_int(255,0,0);
    return(1);
}