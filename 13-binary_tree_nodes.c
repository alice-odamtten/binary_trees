#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes -  function that counts the nodes with at least 1 child
 *
 * @tree: pointer to the root node
 * Return: always size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		count++;
		if (tree->left)
		{
			count += binary_tree_nodes(tree->left);
		}
		if (tree->right)
		{
			count += binary_tree_nodes(tree->right);
		}
	}
	return (count);
}
