#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: If successful, or NULL if allocation fails
 */

int **alloc_grid(int width, int height)
{

	int **output;
	int i, j;


	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);

				for (j = 0; j <= height; j++)
				free(output[j]);
				return (NULL);
				}

				for (j = 0; j < width; j++)
				output[i][j] = 0;
				return (output);
				}
