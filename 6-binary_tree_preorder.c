#include "binary_trees.h"

/**
 * binary_tree_preorder - loops tree using pre-order traversal
 * @tree: pointer to the root of the tree
 * @func: pointer to a function to call
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (node == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
