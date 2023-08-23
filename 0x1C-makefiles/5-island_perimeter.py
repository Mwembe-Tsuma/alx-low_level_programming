#!/usr/bin/python3
"""5-island_perimeter.py"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid

    Args:
        grid: List of integers

    Return:
        Perimeter of the island
    """

    rows = len(grid) - 1
    cols = len(grid[0]) - 1
    per = 0

    for row, i in enumerate(grid):
        for col, j in enumerate(i):
            if j == 1:
                if row == 0 or grid[row - 1][col] != 1:
                    per += 1

                if col == 0 or grid[row][col - 1] != 1:
                    per += 1

                if row == rows or grid[row + 1][col] != 1:
                    per += 1

                if col == cols or grid[row][col + 1] != 1:
                    per += 1
    return per
