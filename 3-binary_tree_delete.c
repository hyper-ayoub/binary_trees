#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_delete - function delte
 * @tree: is a pointer to the root node of the tree to delete.
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);

	}

}
