/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notahtah <notahtah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:23:44 by notahtah          #+#    #+#             */
/*   Updated: 2024/02/05 19:23:44 by notahtah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc != 2)
        return (write(1, "\n", 1));
    i = 0;
    while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        i++;
    while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
        write(1, &argv[1][i++], 1);
    write(1, "\n", 1);
    return (0);
}