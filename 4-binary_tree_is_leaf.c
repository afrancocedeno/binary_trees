#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: The node to be checked
 *
 * Return: 0 if it is not a leaf. 1 if it is a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* according to main only check right nodes */
	if (!node || node->right || node->left)
		return (0);
	return (1);
}
