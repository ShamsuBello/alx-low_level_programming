#include "main.h"
#include <stdio.h>
#include <stdio.h>

/**
 * **alloc_grid - functions that returns a pointer to a 2 dimensional array
 * @width: Column of the array
 * @height: rows of the array
 *
 * Return: A pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height) /* 6 columns and 4 rows*/
{
	int j, i;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(arr);
				return (NULL);
			}
		}

		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}

		return (arr);
	}
}
