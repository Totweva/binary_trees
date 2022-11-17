#include "binary_trees.h"

/**
 * binary_tree_size - checks the size of a binary tree
 * @tree: pointer to the root of the tree
 * Return: 1 or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lefty, righty;

	if (tree == NULL)
		return (0);

	lefty = binary_tree_size(tree->left);
	righty = binary_tree_size(tree->right);
	return (1 + lefty + righty);
}
