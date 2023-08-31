#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height -  function that counts the nodes
 *
 * @tree: pointer to the root node
 * Return: always size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightleft, heightright;

	if (tree == NULL)
	{
		return (0);
	}

	heightleft = binary_tree_height(tree->left);
	heightright = binary_tree_height(tree->right);

	return (heightleft > heightright ?
		heightleft + 1 : heightright + 1);
}

/**
 * binary_tree_balance - function that measures the balance factor
 *
 * @tree: Pointer to the root node
 *
 * Return: always int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return ((int)(binary_tree_height(tree->left)
			- binary_tree_height(tree->right)));
}
