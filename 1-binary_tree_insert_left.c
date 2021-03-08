#include "binary_trees.h"
#include <stdlib.h>

/**
 *
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		if (parent->left == NULL)
			return (NULL);
		return (parent->left);
	}
	else
	{
		new_node = binary_tree_node(parent, value);
		if (new_node == NULL)
			return (NULL);
		new_node->left = parent->left;
		/* The previous node of the child must be the new node */
		parent->left->parent = new_node;
		parent->left = new_node;

		return (new_node);
	}

	return (NULL);
}
