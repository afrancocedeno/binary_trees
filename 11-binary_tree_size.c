#include "binary_trees.h"

/**
 * binary_tree_size - unction that measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: size_t value with size of BT.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* If tree is NULL, do nothing */
	if (!tree)
		return (0);
	/* get size of left and right subtrees recursively if exist */
	return (binary_tree_size((*tree).left) + binary_tree_size((*tree).right) + 1);
}
