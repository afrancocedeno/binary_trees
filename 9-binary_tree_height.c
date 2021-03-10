#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_value;

	if (!tree)
		return (0);
		
	height_value = height(tree);

	return ((size_t)height_value);

}

int height(const binary_tree_t *node)
{
	int h_right = 0, h_left = 0, max = 0;

	if (!node->left && !node->right)
		return (0);

	if (node->left)
		h_left = height(node->left) + 1;

	if (node->right)
		h_right = height(node->right) + 1;

	if (h_left >= h_right)
		max = h_left;
	else
		max = h_right;
	return (max);
}
