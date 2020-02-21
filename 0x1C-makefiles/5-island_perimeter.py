#!/usr/bin/python3
"""
island pariemeter.py
"""


def island_perimeter(grid):
    """
    island function
    """
    per = 0
    for i in range(len(grid)):
        for y in range(len(grid[i])):
            if grid[i][y] == 1:
                per += 4
                if (grid[i + 1][y] == 1) and (i < len(grid) - 1):
                    per -= 1
                if (grid[i - 1][y] == 1) and (i > 0):
                    per -= 1
                if (grid[i][y + 1] == 1) and (y < len(grid[i]) - 1):
                    per -= 1
                if (grid[i][y - 1] == 1) and (y > 0):
                    per -= 1

    return(per)
