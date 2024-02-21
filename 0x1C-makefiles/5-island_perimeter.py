#!/usr/bin/python3
""" A FUNCTION that calculates  the perimeter of an island in shape of a grid"""
def island_perimeter(grid):
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    i = 1

    while i < rows - 1:
        j = 1
        while j < cols - 1:
            case = grid[i][j]
            up = grid[i-1][j]
            right = grid[i][j+1]
            down = grid[i+1][j]
            left = grid[i][j-1]

            count = 0

            switch case:
                case 1:
                    count = up + right + down + left
                    break
                default:
                    j += 1
                    continue

            switch count:
                case 0:
                    perimeter += 4
                    break
                case 1:
                    perimeter += 3
                    break
                case 2:
                    perimeter += 2
                    break
                case 3:
                    perimeter += 1
                    break

            j += 1
        i += 1

    return perimeter
