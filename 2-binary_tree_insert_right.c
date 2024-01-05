#include "binary_trees.h"
#include <stdio.h>
/*
 *  binary_tree_insert_right - binary tree to the right.
 * @parent: parent of the node to be inserted.
 * @value: value to store in node.
 * Return: If parent is NULL or an error occurs - NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
