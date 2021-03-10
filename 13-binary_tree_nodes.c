#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child.
 * @tree:  pointer to the root node of the tree to count the number of nodes.
 *
 * Return: size_t value with numbers with at least one child node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leave_counter = 0;

	/* If tree is NULL, do nothing */
	if (!tree)
		return (0);
	if ((*tree).left || (*tree).right)
		leave_counter += 1;
	/* call left and right subtrees recursively if exist */
	return (binary_tree_nodes((*tree).left) +
		binary_tree_nodes((*tree).right) + leave_counter);
}
