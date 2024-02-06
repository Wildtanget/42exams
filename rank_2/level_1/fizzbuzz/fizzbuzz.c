/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notahtah <notahtah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:35:57 by notahtah          #+#    #+#             */
/*   Updated: 2024/02/05 19:35:57 by notahtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
    int i;
    int temp;

    i = 0;

    while (i++ < 100)
    {
        if (i % 3 == 0)
            write(1, "fizz", 4);
        if (i % 5 == 0)
            write(1, "buzz", 4);
        if (i % 3 != 0 && i % 5 != 0)
        {
            if (i > 9)
            {
                temp = i / 10 + '0';
                write(1, &temp, 1);
            }
            temp = i % 10 + '0';
            write(1, &temp, 1);
        }
        write(1, "\n", 1);
    }
    return (0);
}
//