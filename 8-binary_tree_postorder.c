#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - function that post-order traversal a BT.
 * @tree: pointer to the root of the tree to traverse.
 * @func: pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* now recursion right subtree */
	if ((*tree).left)
		binary_tree_postorder((*tree).left, func);
	/* now recursion right subtree */
	if ((*tree).right)
		binary_tree_postorder((*tree).right, func);
	/* visit the root */
	func((*tree).n);
}
