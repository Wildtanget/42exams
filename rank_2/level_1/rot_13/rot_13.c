/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notahtah <notahtah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:06:27 by notahtah          #+#    #+#             */
/*   Updated: 2024/02/05 21:06:27 by notahtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    unsigned char c;

    if (argc != 2)
        return (write(1, "\n", 1));
    i = 0;
    while (argv[1][i])
    {
        c = argv[1][i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            c += 13;
            if ((c > 90 && c < 104) || (c > 122))
                c -= 26;
        }
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}