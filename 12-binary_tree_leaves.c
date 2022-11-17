#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: 1 or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lefty, righty;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	lefty = binary_tree_leaves(tree->left);
	righty = binary_tree_leaves(tree->right);
	return (lefty + righty);
}
