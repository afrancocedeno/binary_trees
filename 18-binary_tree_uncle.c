#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node.
 *
 * @node: pointer to the node to find the uncle.
 * Return: binary_tree_t datatype pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 *
 * Return: binary_tree_t datatype pointer to the sibling node.
 */
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
