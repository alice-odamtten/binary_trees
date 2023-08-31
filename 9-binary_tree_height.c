#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node
 * Return: always size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightofleft = 0;
	size_t heightofright = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		heightofleft = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		heightofright = 1 + binary_tree_height(tree->right);
	}
	if (heightofright > heightofleft)
	{
		return (heightofright);
	}
	return (heightofleft);
}
