#!/usr/bin/python3
"""Defines an object attribute lookup function.victor"""


def lookup(obj):
    """Return a list of an object's available attributes."""
    return (dir(obj))
