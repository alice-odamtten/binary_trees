#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a binary tree
 *
 * @tree: pointer to the root node
 * Return: always size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree && tree->parent)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
