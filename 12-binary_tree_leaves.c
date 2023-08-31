#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves -  function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node
 * Return: always size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		count = 1;
	}
	count += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
