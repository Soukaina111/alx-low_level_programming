#!/usr/bin/python3
""" A FUNCTION that calculates  the perimeter of an island in shape of a grid"""

def island_perimeter(grid):
    """shows the perimeter of the island
    Args:
         grid (list) = list of integers
    """

    x = len(grid[0])
    y = len(grid)
    z = 0
    leng = 0

    for i in range(y):
        for j in range(x):
            if grid[i][j] == 1:
                leng += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    z += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    z+= 1
    return leng * 4 - z * 2
