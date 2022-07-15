#!/usr/bin/python3
"""Return perimeter of island"""


def island_perimeter(grid):
    """function that calculate perimeter"""
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter = perimeter + 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter = perimeter - 2

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter = perimeter - 2

    return perimeter

