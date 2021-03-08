#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function that creates abinary tree node.
 * @parent: Parent node with the previous node
 * @value:
 * Return: binary_tree_t*
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	(*new_node).n = value;
	(*new_node).parent = parent;
	(*new_node).left = (*new_node).right = NULL;

	return (new_node);
}
