#!/usr/bin/python3
"""Function island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the _perimeter of the is_land descri_bed in grid.

    Args:
        grid (list): grid
    """
    _m, n = len(grid), len(grid[0])
    land, _neighbour = 0, 0
    for i in range(_m):
        for j in range(n):
            if grid[i][j] == 1:
                land += 1
                if i < _m - 1 and grid[i+1][j] == 1:
                    _neighbour += 1
                if j < n - 1 and grid[i][j + 1] == 1:
                    _neighbour += 1
    return land * 4 - 2 * _neighbour
