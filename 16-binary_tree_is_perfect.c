#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
 {
	int height = _height3(tree), value;

	if (_size(tree) == (_pow(2, height + 1) - 1))
		value = 1;
	else
		value = 0;

	return (value);
 }

 int _height3(const binary_tree_t *tree)
{
	int height_value;

	if (!tree)
		return (0);

	height_value = height_aux2(tree);

	return (height_value);

}

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

int _size(const binary_tree_t *tree)
{
	/* If tree is NULL, do nothing */
	if (!tree)
		return (0);
	/* get size of left and right subtrees recursively if exist */
	return (_size((*tree).left) + _size((*tree).right) + 1);
}

int _pow(int base, int exp)
{
	int result = 1, i = 0;

	while (i++ < exp)
		result = result * base;

	return (result);
}