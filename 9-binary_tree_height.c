#include "binary_trees.h"

/**
 * binary_tree_height - checks the height of a binary tree
 * @tree: the binary tree
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefty, righty, height;

	if (tree == NULL)
		return (0);

	lefty = binary_tree_height(tree->left);
	righty = binary_tree_height(tree->right);
	height = lefty > righty ? lefty : righty;

	if (tree->left != NULL || tree->right != NULL)
		height++;

	return (height);
}
