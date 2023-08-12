#!/usr/bin/python3
# -*- coding: utf-8 -*-


def add_tuple(tuple_a=(), tuple_b=()):

    list_a = list(tuple_a)
    list_b = list(tuple_b)

    while len(list_a) < 2:
        list_a.append(0)
    while len(list_b) < 2:
        list_b.append(0)

    new_tuple = (list_a[0] + list_b[0], list_a[1] + list_b[1])
    return new_tuple
