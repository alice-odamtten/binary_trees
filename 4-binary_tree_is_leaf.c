#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: pointer to the node to check
 * Return: always an int
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
