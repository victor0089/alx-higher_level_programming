#!/usr/bin/python3
"""Defines a square-printing function.victor"""


def print_square(size):
    """Print a squarewith the # character.

    Args:
        size (int): The height/width ofthesquare.
    Raises:
        TypeError: If sizeisnot an integer.
        ValueError: If size is < 0
    """
    if not isinstance(size, int):
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")

    for i in range(size):
        [print("#", end="") for j in range(size)]
        print("")
