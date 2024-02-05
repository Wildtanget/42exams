/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notahtah <notahtah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:39:43 by notahtah          #+#    #+#             */
/*   Updated: 2024/02/05 20:39:43 by notahtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int *a;
    int *b;
    int c = 3;
    int d = 4;
    a = &c;
    b = &d;

    ft_swap(a, b);
    printf("a = %d, b = %d\n", *a, *b);
    return (0);
}