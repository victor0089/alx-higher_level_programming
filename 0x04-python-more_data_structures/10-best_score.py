#!/usr/bin/python3

def best_score(a_dictionary):
    if a_dictionary:
        return max(a_dictionary, key=a_dictionary.get)
    else:
        return None
