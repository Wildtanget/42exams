/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notahtah <notahtah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:02:26 by notahtah          #+#    #+#             */
/*   Updated: 2024/02/05 21:02:26 by notahtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc != 2)
        return (write(1, "\n", 1));
    i = 0;
    while (argv[1][i])
        i++;
    while (i >= 0)
    {
        write(1, &argv[1][i], 1);
        i--;
    }
    write(1, "\n", 1);
    return (0);
}