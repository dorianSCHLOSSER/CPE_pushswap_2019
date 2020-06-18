/*
** EPITECH PROJECT, 2019
** main
** File description:
** return
*/

#include "lib/my/my.h"
#include "lib/my/my_list.h"
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char **argv)
{
    Element_t *l_a = NULL;
    Element_t *l_b = NULL;

    if (argc == 1) return (84);
    for (int i = 1 ; argv[i] != NULL ; i++) {
        l_a = move_second(l_a, my_getnbr(argv[i]));
        if (my_getnbr(argv[i]) == 84) return (84);
    }
    my_algo(l_a, l_b, argc);

    return (0);
}
