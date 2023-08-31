#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child
 *
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: always a pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
	{
		new->left = NULL;
	}
	new->n = value;
	new->right = NULL;
	new->parent = parent;
	parent->left = new;
	return (new);
}
