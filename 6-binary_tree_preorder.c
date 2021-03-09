#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - function that preorder traversal a BT.
 * @tree: pointer to the root of the tree to traverse.
 * @func: pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* funcition pointer that receive the integer value */
	func((*tree).n);
	/* then recursion left subtree */
	binary_tree_preorder((*tree).left, func);

	/* now recursion right subtree */
	binary_tree_preorder((*tree).right, func);
}
