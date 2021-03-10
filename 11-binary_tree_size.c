#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* If tree is NULL, do nothing */
	if (!tree)
		return (0);
	/* get size of left and right subtrees recursively if exist */
	return (binary_tree_size((*tree).left) + binary_tree_size((*tree).right) + 1);
}
