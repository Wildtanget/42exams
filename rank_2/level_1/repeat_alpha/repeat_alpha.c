/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notahtah <notahtah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:51:32 by notahtah          #+#    #+#             */
/*   Updated: 2024/02/05 20:51:32 by notahtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int amount;

    if (argc != 2)
        return(write(1, "\n", 1));
    i = 0;
    while (argv[1][i])
    {
        amount = 0;
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            amount = argv[1][i] - 96;
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            amount = argv[1][i] - 64;
        else 
            write(1, &argv[1][i], 1);
        while (amount--)
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}