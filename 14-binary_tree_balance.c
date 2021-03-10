#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor.
 * @tree:
 *
 * Return: int with the difference between the left height and right height.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if ((*tree).left)
		left = 1 + binary_tree_balance((*tree).left);
	if ((*tree).right)
		right = 1 + binary_tree_balance((*tree).right);
	return (left - right);
}
