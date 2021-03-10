#include "binary_trees.h"

/**
 * binary_tree_delete - funcition that free binary tree nodes
 * @tree: reference pointer to root binary tree node.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* If tree is NULL, do nothing */
	if (!tree)
		return;
	_binary_tree_delete(tree);
	free(tree);
}

/**
 * _binary_tree_delete - auxiliar function that frees a binary
 * @tree: reference pointer to root binary tree node.
 */

void _binary_tree_delete(binary_tree_t *tree)
{
	/* If left child exists recursive with its left child */
	if (tree->left)
	{
		_binary_tree_delete(tree->left);
		free(tree->left);
	}
	/* If right child exists recursive with its right child */
	if (tree->right)
	{
		_binary_tree_delete(tree->right);
		free(tree->right);
	}
}
