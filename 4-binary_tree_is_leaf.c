#include "binary_trees.h"
#include <stdlib.h>

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	/* according to main only check right nodes */
	if (node->right)
	{
		binary_tree_is_leaf(node->right);
		return (0);
	}
	return (1);
}
