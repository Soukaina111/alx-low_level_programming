#!/usr/bin/python3
""" A FUNCTION that calculates  the perimeter of an island in shape of a grid"""

def island_perimeter(grid):
    """ this function:
                    Args: grid, a list of list of integers
                    Return: perimeter of the island described in grid
    """

    peri = 0
    zone = []

    for items in range(len(grid)):
        if items == 0 or items == len(grid):
            continue
        for cell in range(len(grid[items])):
            if cell == 0 or cell == len(grid[items]):
                continue
            else:
                if grid[items][cell] == 1:
                    zone = [grid[items - 1][cell], grid[items][cell + 1],
                                grid[items + 1][cell],  grid[items][cell - 1]]
                    itera = 0
                    for j in zone:
                        if j == 0:
                            itera = itera + 1
                    if (itera == 4):
                        return 4
                    elif (itera == 3):
                        peri = peri + 3
                    elif (itera i == 2):
                        peri = peri + 2
                    elif (itera == 1):
                        peri = peri + 1
                    else:
                        pass
                    zone = []
                else:
                    pass
    return peri
