#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree:  pointer to the root node of the tree to count the number of leaves.
 *
 * Return: size_t value with numbers of leaves of a BT.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_counter = 0;

	/* If tree is NULL, do nothing */
	if (!tree)
		return (0);
	if (!(*tree).left && !(*tree).right)
		leave_counter += 1;
	/* get leaves of left and right subtrees recursively if exist */
	return (binary_tree_leaves((*tree).left) +
		binary_tree_leaves((*tree).right) + leave_counter);
}
