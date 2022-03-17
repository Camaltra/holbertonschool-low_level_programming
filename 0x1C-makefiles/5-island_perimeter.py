#!/usr/bin/python3


def island_perimeter(grid):
    area = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                area += 4
                if i > 0 and grid[i - 1][j]:
                    area -= 2
                if j > 0 and grid[i][j - 1]:
                    area -= 2
    return area
