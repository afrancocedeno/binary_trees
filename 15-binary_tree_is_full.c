#include "binary_trees.h"

/**
 * 
 * 
 * @tree:
 * Return: int 
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* check_value is 1 if BT is full, otherwise 0 */
	int check_value = 0;

	if (!tree)
		return (0);
	/* check_value depends on the equal height of left and right subtree */
	check_value = full_checker(tree);

	return (check_value);

}

/**
 * 
 * 
 * @node:
 * Return: int 
 */
int full_checker(const binary_tree_t *node)
{
	int height_right = 0, height_left = 0;

	/* check inmediately if node is leaf */
	if (!node->left && !node->right)
		return (0);

	if (node->left)
		height_left = full_checker(node->left) + 1;

	if (node->right)
		height_right = full_checker(node->right) + 1;

	/* if subtree is balanced return 1 */
	if (height_left == height_right)
		return (1);
	/* otherwise, return 0 */
	return (0);

}
