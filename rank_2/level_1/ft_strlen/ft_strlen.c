/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notahtah <notahtah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:37:10 by notahtah          #+#    #+#             */
/*   Updated: 2024/02/05 20:37:10 by notahtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i  = 0;
    while (str[i])
        i++;
    return (i);
}

int main(void)
{
    char *str = "test";
    int length = ft_strlen(str);

    printf("%d\n", length);
    return (0);
}