#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a sub-tree is full
 *
 * @tree: Node where the sub-tree starts
 *
 * Return: 1 if tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int check_value = 0;

	if (!tree)
		return (0);
	/* check_value depends on the equal height of left and right subtree */
	check_value = height(tree);

	return (check_value);

}

/**
 * height - Computes the height of each sub-tree recursively
 *
 * @node: The node to check from
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int height(const binary_tree_t *node)
{
	int height_right = 0, height_left = 0;

	/* check inmediately if node is leaf */
	if (!node->left && !node->right)
		return (1);

	/* check inmediately if node is not leaf */
	if (!node->left || !node->right)
		return (0);

	if (node->left)
		height_left = height(node->left) + 1;

	if (node->right)
		height_right = height(node->right) + 1;

	/* if subtree is balanced return 1 */
	if (height_left == height_right)
		return (1);
	/* otherwise, return 0 */
	return (0);

}
