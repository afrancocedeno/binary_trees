#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a sub-tree is perfect.
 *
 * @tree: Node to check if the sub-tree is perfect
 *
 * Return: 1 if is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = _height3(tree), value;

	if (_size(tree) == (_pow(2, height + 1) - 1))
		value = 1;
	else
		value = 0;

	return (value);
}

/**
 * _height3 - Computes the height through an auxiliar function.
 *
 * @tree: Node to compute the height from
 *
 * Return: The height
 */

int _height3(const binary_tree_t *tree)
{
	int height_value;

	if (!tree)
		return (0);

	height_value = height_aux2(tree);

	return (height_value);

}

/**
 * height_aux2 - Computes the height recursively
 *
 * @node: Node to compute the height from
 *
 * Return: The height
 */

int height_aux2(const binary_tree_t *node)
{
	int h_right = 0, h_left = 0, max = 0;

	if (!node->left && !node->right)
		return (0);

	if (node->left)
		h_left = height_aux2(node->left) + 1;

	if (node->right)
		h_right = height_aux2(node->right) + 1;

	if (h_left >= h_right)
		max = h_left;
	else
		max = h_right;
	return (max);
}

/**
 * _size - Computes the height recursively
 *
 * @tree: Node to compute the height from
 *
 * Return: The height
 */

int _size(const binary_tree_t *tree)
{
	/* If tree is NULL, do nothing */
	if (!tree)
		return (0);
	/* get size of left and right subtrees recursively if exist */
	return (_size((*tree).left) + _size((*tree).right) + 1);
}

/**
 * _pow - potentiation function
 *
 * @base: The base
 * @exp: The exponent
 *
 * Return: The result of base ^ exp
 */

int _pow(int base, int exp)
{
	int result = 1, i = 0;

	while (i++ < exp)
		result = result * base;

	return (result);
}
