#!/usr/bin/python3

def no_c(my_string):
    new_string = ""
    for character in my_string:
        if character != 'c' and character != 'C':
            new_string += character
    return new_string
