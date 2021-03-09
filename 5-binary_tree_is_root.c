#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - function that checks if a given node is a root
 *
 * @node: input pointer to the nod eto check.
 * Return: 1 if node is a root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	/* it happens when you set the recursion with parent member */
	if (node->parent)
	{
		binary_tree_is_root(node->right);
		return (0);
	}
	return (1);
}
