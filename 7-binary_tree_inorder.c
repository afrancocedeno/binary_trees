#include "binary_trees.h"

/**
 * binary_tree_inorder - function that in-order traversal a BT.
 * @tree: pointer to the root of the tree to traverse.
 * @func: pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* now recursion right subtree */
	if ((*tree).left)
		binary_tree_inorder((*tree).left, func);
	/* visit the root */
	func((*tree).n);
	/* now recursion right subtree */
	if ((*tree).right)
		binary_tree_inorder((*tree).right, func);
}
