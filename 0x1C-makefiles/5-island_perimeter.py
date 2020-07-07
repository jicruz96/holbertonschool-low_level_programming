#!/usr/bin/python3
"""
Defines island_perimeter function
"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid

        Args:
            grid (list): list of list of integers
    """
    # Return 0 if input is None type or empty list
    if grid is None or len(grid) == 0:
        return 0

    grid_width = len(grid[0])

    if grid_width == 0:
        return 0

    land = 1
    water = 0

    spot_height = 1
    spot_width = 1
    spot_perimeter = (2 * spot_height) + (2 * spot_width)
    island_perimeter = 0

    # set prev_row to a water boundary (i.e. list of 0's)
    #   Note: this is done to check the first row
    prev_row = [water for i in range(grid_width)]

    for row in grid:
        prev_spot = water
        for i in range(grid_width):

            current_spot = row[i]

            if current_spot == land:

                # Add spot_perimeter to perimeter
                island_perimeter += spot_perimeter

                # If current_spot is touching land, remove length of
                # touching sides from island_perimeter.

                if prev_spot == land:
                    island_perimeter -= 2 * spot_height
                if prev_row[i] == land:
                    island_perimeter -= 2 * spot_width

            prev_spot = current_spot

        prev_row = row

    return island_perimeter
