#include "binary_trees.h"

/**
 * binary_tree_balance - checks balance factor of a binary tree
 * @tree: the root node of the tree
 * Return: 1 or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = tree->left == NULL ? -1 : (int)binary_tree_height(tree->left);
	r_height = tree->right == NULL ? -1 : (int)binary_tree_height(tree->right);
	return (l_height - r_height);
}

/**
 * _binary_tree_height - checks for the height of a binary tree
 * @tree: the binary tree
 * Return: the height of the binary tree
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height, height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	height = l_height > r_height ? l_height : r_height;

	if (tree->left != NULL || tree->right != NULL)
		height++;

	return (height);
}
