/*
** EPITECH PROJECT, 2019
** liste
** File description:
** return
*/

#include "my_list.h"
#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include <unistd.h>
#include <stdio.h>

int check_value(Element_t *list, int value)
{
    Element_t *live = list;
    live = search_i(live, value);
    return (live->number);
}
