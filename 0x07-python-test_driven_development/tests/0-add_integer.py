#!/usr/bin/python3
"""Defines an integer addition function. victor"""


def add_integer(a, b=98):
    """Return the integer addition of a and b.

    Float arguments aretypecasted to intsbefore additionis performed.

    Raises:
        TypeError: Ifeither of a or b is a non-integerandnon-float.
    """
    if ((not isinstance(a, int) and not isinstance(a, float))):
        raise TypeError("a must be an integer")
    if ((not isinstance(b, int) and not isinstance(b, float))):
        raise TypeError("b must be an integer")
    return (int(a) + int(b))
