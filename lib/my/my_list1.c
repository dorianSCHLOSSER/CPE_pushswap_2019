/*
** EPITECH PROJECT, 2019
** liste1
** File description:
** return
*/

#include "my_list.h"
#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

Element_t *move_second(Element_t *list, int newnumber)
{
    Element_t *new = malloc(sizeof(*new));
    Element_t *temp = list;
    new->number = newnumber;
    new->following = NULL;

    if (list == NULL) return (new);
    else {
        while (temp->following != NULL)
            temp = temp->following;
    temp->following = (new);
    return (list);
    }
}

Element_t *move_front(Element_t *list, int value)
{
    Element_t *live = malloc(sizeof(Element_t));

    live->number = value;
    live->following = list;

    return (live);
}

Element_t *remove_elementfront(Element_t *list)
{
    if (list != NULL)
    {
        Element_t *send = list->following;
        free(list);
        return (send);
    }
    else return (NULL);
}

Element_t *search_i(Element_t *list, int value)
{
    int i = 0;

    for (; i < value ; i++) {
        list = list->following;
        if (list == NULL) return (NULL);
    }
    if (list == NULL) return (NULL);
    else return (list);
}

Element_t *swap_front(Element_t *list)
{
    int index = 0;
    int index2 = 0;

    if (list == NULL) return (NULL);
    Element_t *live = list;
    index = check_value(live, 1);
    index2 = check_value(live, 0);
    live->number = index;
    live = live->following;
    live->number = index2;

    return (list);
}
