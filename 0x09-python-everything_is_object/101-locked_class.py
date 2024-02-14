#!/usr/bin/python3
"""
Locked class
"""


class LockedClass:
    """
    Block user from creating a new instace
    dynamically
    """

    __slots__ = "first_name"
