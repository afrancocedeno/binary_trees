#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a BT.
 *
 * @tree: pointer to the node to measure.
 * Return: size_t value with the depth of the binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_counter = 0;

	if (!tree)
		return (0);
	/* increment only when parent member exist */
	if ((*tree).parent)
		depth_counter += 1;
	/* recurison statement includen increment value */
	return (binary_tree_depth((*tree).parent) + depth_counter);
}
