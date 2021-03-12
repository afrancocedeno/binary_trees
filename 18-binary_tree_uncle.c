#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	/* If the right child is the same as current */
	if (node == node->parent->right)
	{
		/* return the parent´s left child */
		if (node->parent->left)
			return (node->parent->left);
	}
	else
	{
		if (node->parent->right)
			return (node->parent->right);
	}
	return (NULL);
}
