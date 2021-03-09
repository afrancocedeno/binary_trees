#include "binary_trees.h"
#include <stdlib.h>

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left)
	{
		binary_tree_is_leaf(node->left);
		free(node->left);
	}
	if (node->right)
	{
		binary_tree_is_leaf(node->right);
		return (0);
	}
	return (1);
}
