/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notahtah <notahtah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:24:22 by notahtah          #+#    #+#             */
/*   Updated: 2024/02/05 21:24:22 by notahtah         ###   ########.fr       */
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
    {
        if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
        {
            if (argv[1][i] == 'z' || argv[1][i] == 'Z')
                argv[1][i] -= 25;
            else 
                argv[1][i]++;
        }
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}