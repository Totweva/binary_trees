#include "binary_trees.h"

/**
 * binary_tree_postorder - loops a tree in post-order traversal
 * @tree: pointer to the root node of a tree
 * @func: pointer to the function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
