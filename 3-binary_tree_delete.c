#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - funcition that free binary tree nodes
 * @tree: reference pointer to root binary tree node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* If tree is NULL, do nothing */
	if (!tree)
		return;
	/* If left child exists recursive with its left child */
	if (tree->left)
	{
		binary_tree_delete(tree->left);
		free(tree->left);
	}
	/* If right child exists recursive with its right child */
	if (tree->right)
	{
		binary_tree_delete(tree->right);
		free(tree->right);
	}
}
