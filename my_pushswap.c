/*
** EPITECH PROJECT, 2019
** algo
** File description:
** return
*/

#include "lib/my/my.h"
#include "lib/my/my_list.h"
#include <stddef.h>
#include <stdlib.h>

void my_algo(Element_t *l_a, Element_t *l_b, int argc)
{
    Element_t *live = l_a;
    Element_t *temp = l_b;

    if (check_algo(live) == 0) my_putstr("\n");
    while (check_algo(live) == 1) {
        for (int i = 0 ; i < argc - 2 ; i++) {
            if (live->number > check_value(live, 1)) {
            live = swap_front(live);
            my_putstr("sa ");
            }
            temp = move_front(temp, live->number);
            live = remove_elementfront(live);
            my_putstr("pb ");
            if (live->following == NULL) {
            temp = move_front(temp, live->number);
            live = remove_elementfront(live);
            my_putstr("pb ");
            }
        }
        for (int i = 0 ; i < argc - 2 ; i++) {
            if (temp->number < check_value(temp, 1)) {
            temp = swap_front(temp);
            my_putstr("sb ");
            }
            live = move_front(live, temp->number);
            temp = remove_elementfront(temp);
            my_putstr("pa ");
            if (temp->following == NULL) {
            live = move_front(live, temp->number);
            temp = remove_elementfront(temp);
            if (check_algo(live) == 1)
            my_putstr("pa ");
            else my_putstr("pa\n");
            }
        }
    }
    liveFre(live);
}

void liveFre(Element_t *liste)
{
    Element_t *live = liste;

    while (live->following != NULL) live = remove_elementfront(live);
    live = remove_elementfront(live);
}

int check_algo(Element_t *liste)
{
    Element_t *live = liste;

    for (int i = 0 ; live->following != NULL ; i++) {
        if (live->number > check_value(live, 1)) {
            return (1);
        }
        live = live->following;
    }
    return (0);
}