#include "binary_trees.h"
#include <stdlib.h>

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* according to main only check right nodes */
	if (!node || (*node).right || (*node).left)
		return (0);
	return (1);
}
