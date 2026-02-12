/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adaptive_algorithm.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalomar <saalomar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 10:33:48 by saalomar          #+#    #+#             */
/*   Updated: 2026/01/18 13:58:37 by saalomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_push_swap.h"

void	adaptive_algorithm(t_stack *a, t_stack *b, t_bench *bench)
{
	float	disorder;

	disorder = compute_disorder(a);
	if (disorder < 0.2)
	{
		simple_algorithm(a, b, bench);
	}
	else if (disorder >= 0.2 && disorder < 0.5)
	{
		medium_algorithm(a, b, bench);
	}
	else
	{
		complex_algorithm(a, b, bench);
	}
}
