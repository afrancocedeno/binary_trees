#include "binary_trees.h"
#include <stdlib.h>

/**
 * @brief 
 * 
 * @parent:
 * @value:
 * Return: binary_tree_t* 
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	/* both cases, node needs to be created */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	/* replace it if left-child exists */
	if ((*parent).left)
	{
		/* reference the left child */
		new_node->left = parent->left;
		/* The previous node of the child must be the new node */
		parent->left->parent = new_node;
	}
	/* Both cases refer the new node as left child to parent */
	parent->left = new_node;

	return (new_node);
}
