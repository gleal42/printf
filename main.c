/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleal <gleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:34:46 by gleal             #+#    #+#             */
/*   Updated: 2021/02/24 21:44:27 by gleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int i;
	int d;
	d = 193123;
	i = ft_printf("%20d,\n", d);
	printf("%d", i);
}

/* se precision check off precision = maior entre maximum width
 * precision e sempre no minimo tamanho do numero
 * se tiver precision aparecem zeros acima do tamanho da palavra
 * se tiver 0 sem precision fica tudo zeros
 * zero so e importante se nao houver precisao
 * */
