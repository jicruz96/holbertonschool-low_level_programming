#!/usr/bin/python3
"""
Defines perimeter function
"""


def perimeter(grid):
    """ returns the perimeter of the island described in grid """
    try:
        grid_width = len(grid[0])
    except:
        return 0

    perimeter = 0
    prev_row = [0 for zone in range(grid_width)]

    for row in grid:
        prev_zone = 0
        for i in range(grid_width):
            if row[i] == 1:
                perimeter += 4 - (2 * prev_zone) - (2 * prev_row[i])
            prev_zone = row[i]
        prev_row = row

    return perimeter


if __name__ == "__main__":
    # grid = [
    #     [0, 0, 1, 1, 1, 0],
    #     [0, 0, 1, 1, 1, 0],
    #     [0, 0, 1, 1, 1, 0],
    #     [0, 0, 0, 0, 1, 0],
    #     [0, 0, 0, 0, 0, 0]
    # ]
    grid = []
    print(perimeter(grid))
