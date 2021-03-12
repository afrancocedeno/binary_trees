#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor.
 *
 * @tree: The node tho measure the balance factor from
 *
 * Return: int with the difference between the left height and right height.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_height2(tree->left) - _height2(tree->right));
}

/**
 * _height2 - Computes the height
 *
 * @tree: The node tho measure the height factor from
 *
 * Return: The height.
 */

int _height2(const binary_tree_t *tree)
{
	int height_value;

	if (!tree)
		return (0);

	height_value = height_aux(tree);

	return (height_value + 1);

}

/**
 * height_aux - Computes the height recursively
 *
 * @node: The node tho measure the height factor from
 *
 * Return: The height.
 */

int height_aux(const binary_tree_t *node)
{
	int h_right = 0, h_left = 0, max = 0;

	if (!node->left && !node->right)
		return (0);

	if (node->left)
		h_left = height_aux(node->left) + 1;

	if (node->right)
		h_right = height_aux(node->right) + 1;

	if (h_left >= h_right)
		max = h_left;
	else
		max = h_right;
	return (max);
}
