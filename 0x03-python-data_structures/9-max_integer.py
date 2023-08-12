#!/usr/bin/python3
# -*- coding: utf-8 -*-


def max_integer(my_list=[]):

    if not my_list:
        return None

    max = my_list[0]
    for element in my_list:
        if element > max:
            max = element

    return max
