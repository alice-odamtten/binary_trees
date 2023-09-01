#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: Pointer to the root node
 *
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
 * binary_tree_is_perfect -  function that check if a binary tree is perfect
 *
 * @tree: Pointer to the root node
 *
 * Return: always int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
	{
		return (0);
	}

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight == rheight)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}
