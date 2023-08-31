#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the left-child
 *
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: always a pointer
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
	{
		new->right = NULL;
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	parent->right = new;
	return (new);
}
