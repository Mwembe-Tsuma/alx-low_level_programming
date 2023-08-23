#!/usr/bin/python3


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid

    Args:
        grid: List of integers

    Return:
        Perimeter of the island
    """

    rows = len(grid)
    cols = len(grid[0])
    per = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                per += 4

                if row > 0 and grid[row - 1][col] == 1:
                    per -= 2

                if row > 0 and grid[row][col - 1] == 1:
                    per -= 2

    return per
