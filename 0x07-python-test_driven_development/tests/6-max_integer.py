#!/usr/bin/python3
"""Module to find the max integer in a list victor
"""


def max_integer(list=[]):
    """Function to find andreturn themax integerin a list of integers
        If the list isempty, the function returnsNone
    """
    if len(list) == 0:
        return None
    result = list[0]
    i = 1
    while i < len(list):
        if list[i] > result:
            result = list[i]
        i += 1
    return result
