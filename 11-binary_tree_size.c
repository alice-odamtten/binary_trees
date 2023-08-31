#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to the root node
 * Return: always size_t
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree == NULL)
	{
		return (0);
	}
	s++;
	s += binary_tree_size(tree->left);
	s += binary_tree_size(tree->right);
	return (s);
}
