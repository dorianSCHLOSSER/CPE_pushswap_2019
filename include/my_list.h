/*
** EPITECH PROJECT, 2019
** _LISTE_H_
** File description:
** return
*/

#ifndef _LIST_H_
#define _LIST_H_


typedef struct Element_t Element_t;
struct Element_t
{
    int number;
    Element_t *following;
};

Element_t *move_second(Element_t *list, int newnumber);
Element_t *remove_elementfront(Element_t *list);
Element_t *swap_front(Element_t *list);
int check_value(Element_t *list, int value);
Element_t *search_i(Element_t *list, int value);
void my_algo(Element_t *l_a, Element_t *l_b, int argc);
int check_algo(Element_t *list);
Element_t *move_front(Element_t *liste, int value);
void liveFre(Element_t *list);
void la_to_lb(Element_t *live, Element_t *temp, int argc);


#endif
